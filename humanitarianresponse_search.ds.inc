<?php
/**
 * @file
 * humanitarianresponse_search.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function humanitarianresponse_search_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'search';
  $ds_view_mode->label = 'Search';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'profile2' => 'profile2',
    'taxonomy_term' => 'taxonomy_term',
    'user' => 'user',
  );
  $export['search'] = $ds_view_mode;

  return $export;
}
