<?php
/**
 * @file
 * sbp_faq.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function sbp_faq_taxonomy_default_vocabularies() {
  return array(
    'question_category' => array(
      'name' => 'Question Category',
      'machine_name' => 'question_category',
      'description' => 'The category used for the FAQ question type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
