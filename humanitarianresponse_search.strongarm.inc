<?php
/**
 * @file
 * humanitarianresponse_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function humanitarianresponse_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@node_index';
  $strongarm->value = 1;
  $export['facetapi_pretty_paths_searcher_search_api@node_index'] = $strongarm;

  return $export;
}
