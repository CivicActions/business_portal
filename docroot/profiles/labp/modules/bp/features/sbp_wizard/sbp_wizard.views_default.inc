<?php
/**
 * @file
 * sbp_wizard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sbp_wizard_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sbp_wizard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Business Portal Wizard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Business Portal Wizard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Section (field_section) */
  $handler->display->display_options['relationships']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['relationships']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['relationships']['field_section_tid']['field'] = 'field_section_tid';
  $handler->display->display_options['relationships']['field_section_tid']['required'] = TRUE;
  /* Field: Content: Section */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['label'] = 'section';
  $handler->display->display_options['fields']['field_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section']['type'] = 'services';
  $handler->display->display_options['fields']['field_section']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'term_name' => 1,
  );
  /* Field: Content: Screen ID */
  $handler->display->display_options['fields']['field_screen_id']['id'] = 'field_screen_id';
  $handler->display->display_options['fields']['field_screen_id']['table'] = 'field_data_field_screen_id';
  $handler->display->display_options['fields']['field_screen_id']['field'] = 'field_screen_id';
  $handler->display->display_options['fields']['field_screen_id']['label'] = 'screen_id';
  $handler->display->display_options['fields']['field_screen_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_screen_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  /* Field: Content: Button(s) */
  $handler->display->display_options['fields']['field_button']['id'] = 'field_button';
  $handler->display->display_options['fields']['field_button']['table'] = 'field_data_field_button';
  $handler->display->display_options['fields']['field_button']['field'] = 'field_button';
  $handler->display->display_options['fields']['field_button']['label'] = 'buttons';
  $handler->display->display_options['fields']['field_button']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_button']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'services',
  );
  $handler->display->display_options['fields']['field_button']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_button']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sbp_wizard_screen' => 'sbp_wizard_screen',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'business-portal-wizard';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'wizard_services');
  $handler->display->display_options['path'] = 'business-portal-wizard';
  $export['sbp_wizard'] = $view;

  return $export;
}
