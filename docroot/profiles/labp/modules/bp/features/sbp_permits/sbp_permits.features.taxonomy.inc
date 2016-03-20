<?php
/**
 * @file
 * sbp_permits.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function sbp_permits_taxonomy_default_vocabularies() {
  return array(
    'permit_tags' => array(
      'name' => 'Permit - Tags',
      'machine_name' => 'permit_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
