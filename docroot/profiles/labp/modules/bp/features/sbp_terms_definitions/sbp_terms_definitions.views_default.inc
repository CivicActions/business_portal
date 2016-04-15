<?php
/**
 * @file
 * sbp_terms_definitions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sbp_terms_definitions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'terms_definitions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Terms & Definitions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_term_definitions_grouping',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Term & Definitions Grouping */
  $handler->display->display_options['fields']['field_term_definitions_grouping']['id'] = 'field_term_definitions_grouping';
  $handler->display->display_options['fields']['field_term_definitions_grouping']['table'] = 'field_data_field_term_definitions_grouping';
  $handler->display->display_options['fields']['field_term_definitions_grouping']['field'] = 'field_term_definitions_grouping';
  $handler->display->display_options['fields']['field_term_definitions_grouping']['label'] = '';
  $handler->display->display_options['fields']['field_term_definitions_grouping']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_term_definitions_grouping']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_definitions_grouping']['type'] = 'term_reference_tree';
  $handler->display->display_options['fields']['field_term_definitions_grouping']['settings'] = array(
    'token_display_selected' => '',
    'token_display_unselected' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['hide_empty'] = TRUE;
  /* Field: Field: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'terms_definitions' => 'terms_definitions',
  );
  /* Filter criterion: Taxonomy term: Term &amp; Definitions Grouping (field_term_definitions_grouping) */
  $handler->display->display_options['filters']['field_term_definitions_grouping_tid']['id'] = 'field_term_definitions_grouping_tid';
  $handler->display->display_options['filters']['field_term_definitions_grouping_tid']['table'] = 'field_data_field_term_definitions_grouping';
  $handler->display->display_options['filters']['field_term_definitions_grouping_tid']['field'] = 'field_term_definitions_grouping_tid';
  $handler->display->display_options['filters']['field_term_definitions_grouping_tid']['value'] = array(
    161 => '161',
    162 => '162',
    163 => '163',
  );
  $handler->display->display_options['filters']['field_term_definitions_grouping_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_term_definitions_grouping_tid']['expose']['operator_id'] = 'field_term_definitions_grouping_tid_op';
  $handler->display->display_options['filters']['field_term_definitions_grouping_tid']['expose']['label'] = 'Term &amp; Definitions Grouping (field_term_definitions_grouping)';
  $handler->display->display_options['filters']['field_term_definitions_grouping_tid']['expose']['operator'] = 'field_term_definitions_grouping_tid_op';
  $handler->display->display_options['filters']['field_term_definitions_grouping_tid']['expose']['identifier'] = 'field_term_definitions_grouping_tid';
  $handler->display->display_options['filters']['field_term_definitions_grouping_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    134764228 => 0,
    103270763 => 0,
    175031666 => 0,
    197817655 => 0,
  );
  $handler->display->display_options['filters']['field_term_definitions_grouping_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_definitions_grouping_tid']['vocabulary'] = 'terms_definitions_grouping';
  $handler->display->display_options['filters']['field_term_definitions_grouping_tid']['hierarchy'] = 1;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $export['terms_definitions'] = $view;

  return $export;
}
