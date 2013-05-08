<?php
/**
 * @file
 * ads_properties_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ads_properties_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ads_properties_content_types_node_info() {
  $items = array(
    'estate_agency' => array(
      'name' => t('Estate Agency'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'landlord' => array(
      'name' => t('Landlord'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'property' => array(
      'name' => t('Property'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
