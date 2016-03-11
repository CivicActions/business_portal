<?php
/**
 * @file
 * sbp_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function sbp_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'sbp_tags' => array(
      'name' => 'Tags',
      'machine_name' => 'sbp_tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'carousel' => array(
      'name' => 'Carousel',
      'machine_name' => 'carousel',
      'description' => 'mark as carousel image or not',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'department_type' => array(
      'name' => 'Agency type',
      'machine_name' => 'department_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'document_business_need' => array(
      'name' => 'Document - Business Need',
      'machine_name' => 'document_business_need',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'document_business_stage' => array(
      'name' => 'Document - Business Stage',
      'machine_name' => 'document_business_stage',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'document_type' => array(
      'name' => 'Document - Type',
      'machine_name' => 'document_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'industry_tags' => array(
      'name' => 'Permit - Industry',
      'machine_name' => 'industry_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'permit_government_level' => array(
      'name' => 'Permit - Government Level',
      'machine_name' => 'permit_government_level',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'permit_issuing_department' => array(
      'name' => 'Permit - Issuing Department',
      'machine_name' => 'permit_issuing_department',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'required_featured_items' => array(
      'name' => 'Required / Featured Items',
      'machine_name' => 'required_featured_items',
      'description' => 'Which type of item?',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'term_alphabet' => array(
      'name' => 'Term Alphabet',
      'machine_name' => 'term_alphabet',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
