<?php
/**
 * @file
 * ads_property_content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ads_property_content_types_taxonomy_default_vocabularies() {
  return array(
    'places' => array(
      'name' => 'Places',
      'machine_name' => 'places',
      'description' => 'Type of places (e.g. building, structure, open space).',
      'hierarchy' => 0,
      'module' => '',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
  );
}
