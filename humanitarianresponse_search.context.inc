<?php
/**
 * @file
 * humanitarianresponse_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function humanitarianresponse_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = 'On search view';
  $context->tag = 'search';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'search:page' => 'search:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search_api_saved_searches-node_index' => array(
          'module' => 'search_api_saved_searches',
          'delta' => 'node_index',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'current_search-humanitarianresponse' => array(
          'module' => 'current_search',
          'delta' => 'humanitarianresponse',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'views--exp-search-page' => array(
          'module' => 'views',
          'delta' => '-exp-search-page',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-Shb0Q1vWgCArrHrjHszTyhl2jaEhIjzW' => array(
          'module' => 'facetapi',
          'delta' => 'Shb0Q1vWgCArrHrjHszTyhl2jaEhIjzW',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-SRTVUTAsjHh8QrIHE2NMBl3MM1s3qOKp' => array(
          'module' => 'facetapi',
          'delta' => 'SRTVUTAsjHh8QrIHE2NMBl3MM1s3qOKp',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-UrbbwTPM31dQGgHrSt9Tjdnblkw12f6E' => array(
          'module' => 'facetapi',
          'delta' => 'UrbbwTPM31dQGgHrSt9Tjdnblkw12f6E',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-cpoyWFNPOVLHvKGY6t6bb8LVM41Xs2Dm' => array(
          'module' => 'facetapi',
          'delta' => 'cpoyWFNPOVLHvKGY6t6bb8LVM41Xs2Dm',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-YQrWdaYB0Jm9BGw7VcgHFswJHlxawCsl' => array(
          'module' => 'facetapi',
          'delta' => 'YQrWdaYB0Jm9BGw7VcgHFswJHlxawCsl',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-JAKZs3absS9kL1zrH6idqbCFj61Z4SpL' => array(
          'module' => 'facetapi',
          'delta' => 'JAKZs3absS9kL1zrH6idqbCFj61Z4SpL',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'facetapi-FKBVzvYt9xMqDr8L58X0KOiiv1D8E5Ao' => array(
          'module' => 'facetapi',
          'delta' => 'FKBVzvYt9xMqDr8L58X0KOiiv1D8E5Ao',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
        'facetapi-CfN1BAVLpNGwWHadrZv5JTCzQH4KmKni' => array(
          'module' => 'facetapi',
          'delta' => 'CfN1BAVLpNGwWHadrZv5JTCzQH4KmKni',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'facetapi-rOO3lO2B480jNa51cz03IJgosO6bbCBm' => array(
          'module' => 'facetapi',
          'delta' => 'rOO3lO2B480jNa51cz03IJgosO6bbCBm',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
        'facetapi-nGHr1V0WtNCEBuXDivvBJM8DiY2as68L' => array(
          'module' => 'facetapi',
          'delta' => 'nGHr1V0WtNCEBuXDivvBJM8DiY2as68L',
          'region' => 'sidebar_first',
          'weight' => '2',
        ),
        'facetapi-WaEgyIn8f6HkMj1R536Y3vBptvKRj30W' => array(
          'module' => 'facetapi',
          'delta' => 'WaEgyIn8f6HkMj1R536Y3vBptvKRj30W',
          'region' => 'sidebar_first',
          'weight' => '3',
        ),
        'facetapi-Nars6CXEF2stEbUlZR8NEnqEtBDARTb1' => array(
          'module' => 'facetapi',
          'delta' => 'Nars6CXEF2stEbUlZR8NEnqEtBDARTb1',
          'region' => 'sidebar_first',
          'weight' => '4',
        ),
        'search_api_sorts-search-sorts' => array(
          'module' => 'search_api_sorts',
          'delta' => 'search-sorts',
          'region' => 'sidebar_first',
          'weight' => '5',
        ),
      ),
    ),
    'breadcrumb' => '<front>',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('On search view');
  t('search');
  $export['search'] = $context;

  return $export;
}
