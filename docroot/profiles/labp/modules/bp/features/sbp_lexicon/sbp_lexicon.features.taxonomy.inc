<?php
/**
 * @file
 * sbp_lexicon.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function sbp_lexicon_taxonomy_default_vocabularies() {
  return array(
    'terms_definitions' => array(
      'name' => 'Terms & Definitions',
      'machine_name' => 'terms_definitions',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
