<?php
/**
 * @file
 * humanitarianresponse_search.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function humanitarianresponse_search_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'humanitarianresponse';
  $item->label = 'Humanitarianresponse';
  $item->settings = array(
    'items' => array(
      'results' => array(
        'id' => 'text',
        'label' => 'Results',
        'text' => 'Search found [facetapi_results:result-count] item',
        'plural' => 1,
        'text_plural' => 'Search found [facetapi_results:result-count] items',
        'plural_condition' => 'facetapi_results:result-count',
        'wrapper' => 1,
        'element' => 'strong',
        'css' => 0,
        'classes' => '',
        'weight' => '-50',
      ),
      'active_items' => array(
        'id' => 'active',
        'label' => 'Active items',
        'pattern' => '[facetapi_active:active-value]',
        'keys' => 1,
        'keys_link' => 1,
        'keys_param' => 'search_api_views_fulltext',
        'css' => 0,
        'classes' => '',
        'nofollow' => 1,
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '3',
    ),
  );
  $export['humanitarianresponse'] = $item;

  return $export;
}
