<?php
/**
 * @file
 * sbp_terms_definitions.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function sbp_terms_definitions_defaultconfig_features() {
  return array(
    'sbp_terms_definitions' => array(
      'default_page_manager_pages' => 'default_page_manager_pages',
      'strongarm' => 'strongarm',
      'views_default_views' => 'views_default_views',
    ),
  );
}

/**
 * Implements hook_defaultconfig_default_page_manager_pages().
 */
function sbp_terms_definitions_defaultconfig_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'terms_definitions';
  $page->task = 'page';
  $page->admin_title = 'Terms & Definitions';
  $page->admin_description = '';
  $page->path = 'resources/terms-definitions/grouping/!name';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'name' => array(
      'id' => '',
      'identifier' => '',
      'argument' => '',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_terms_definitions__panel';
  $handler->task = 'page';
  $handler->subtask = 'terms_definitions';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4f2c0087-fdec-4473-a67f-221a011f23a5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-67ebf9fd-4e28-423a-a335-883e9f41ccaa';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'terms_definitions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '67ebf9fd-4e28-423a-a335-883e9f41ccaa';
    $display->content['new-67ebf9fd-4e28-423a-a335-883e9f41ccaa'] = $pane;
    $display->panels['right'][0] = 'new-67ebf9fd-4e28-423a-a335-883e9f41ccaa';
    $pane = new stdClass();
    $pane->pid = 'new-b167c279-e120-4f4f-9645-2c2843fda4bf';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '7',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b167c279-e120-4f4f-9645-2c2843fda4bf';
    $display->content['new-b167c279-e120-4f4f-9645-2c2843fda4bf'] = $pane;
    $display->panels['top'][0] = 'new-b167c279-e120-4f4f-9645-2c2843fda4bf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b167c279-e120-4f4f-9645-2c2843fda4bf';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['terms_definitions'] = $page;

  return $pages;

}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function sbp_terms_definitions_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_taxonomy_term__terms_definitions';
  $strongarm->value = TRUE;
  $export['metatag_enable_taxonomy_term__terms_definitions'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_views_default_views().
 */
function sbp_terms_definitions_defaultconfig_views_default_views() {
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
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '1';
  $handler->display->display_options['arguments']['name']['break_phrase'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'terms_definitions' => 'terms_definitions',
  );
  $export['terms_definitions'] = $view;

  return $export;
}
