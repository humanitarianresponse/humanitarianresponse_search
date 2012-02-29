<?php
/**
 * @file
 * humanitarianresponse_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_search_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function humanitarianresponse_search_default_search_api_index() {
  $items = array();
  $items['node_index'] = entity_import('search_api_index', '{
    "name" : "Node index",
    "machine_name" : "node_index",
    "description" : null,
    "server" : "solr_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "type" : { "type" : "string" },
        "title" : { "type" : "text" },
        "language" : { "type" : "string" },
        "url" : { "type" : "uri" },
        "status" : { "type" : "boolean" },
        "created" : { "type" : "date" },
        "changed" : { "type" : "date" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "field_clusters" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_coordination_hubs" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_display_properties" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_document_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_emergency" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_fundings" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_locations" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_organizations" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_themes" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_map_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_event_category" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_event_contact_email" : { "type" : "text" },
        "field_event_contact_person" : { "type" : "text" },
        "field_link_description" : { "type" : "text" },
        "field_contact_email" : { "type" : "text" },
        "field_contact_job_title" : { "type" : "text" },
        "field_contact_lastname" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "body:value" : { "type" : "text" },
        "body:summary" : { "type" : "text" },
        "field_document_files:field_document_files_file:file" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "file" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "field_clusters:parent" : "field_clusters:parent" } }
        },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_event_contact_email" : true,
              "field_event_contact_person" : true,
              "field_link_description" : true,
              "field_contact_email" : true,
              "field_contact_job_title" : true,
              "field_contact_lastname" : true,
              "body:value" : true,
              "body:summary" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_event_contact_email" : true,
              "field_event_contact_person" : true,
              "field_link_description" : true,
              "field_contact_email" : true,
              "field_contact_job_title" : true,
              "field_contact_lastname" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_event_contact_email" : true,
              "field_event_contact_person" : true,
              "field_link_description" : true,
              "field_contact_email" : true,
              "field_contact_job_title" : true,
              "field_contact_lastname" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "spaces" : "[^\\\\p{L}\\\\p{N}^\\u0027]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_event_contact_email" : true,
              "field_event_contact_person" : true,
              "field_link_description" : true,
              "field_contact_email" : true,
              "field_contact_job_title" : true,
              "field_contact_lastname" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function humanitarianresponse_search_default_search_api_server() {
  $items = array();
  $items['solr_server'] = entity_import('search_api_server', '{
    "name" : "Solr Server",
    "machine_name" : "solr_server",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "host" : "www.viguierjust.com",
      "port" : "8080",
      "path" : "\\/solr",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}