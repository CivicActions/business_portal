<?php

$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__panel_context_8652fd84-6ff2-498d-af72-a9f1e6682524';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = -95;
$handler->conf = array(
  'title' => 'Node with Hero',
  'no_blocks' => 0,
  'pipeline' => 'ipe',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => '',
  'access' => array(
    'logic' => 'and',
  ),
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
$display->uuid = '9f303ccb-71ca-4c6c-a1b0-67ac15a0c43a';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-bc1d7e89-bc71-4c2f-ab04-97cbaed62bdb';
$pane->panel = 'left';
$pane->type = 'block';
$pane->subtype = 'menu_block-1';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'override_title' => 0,
  'override_title_text' => '',
  'override_title_heading' => 'h2',
);
$pane->cache = array();
$pane->style = array();
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = 'bc1d7e89-bc71-4c2f-ab04-97cbaed62bdb';
$display->content['new-bc1d7e89-bc71-4c2f-ab04-97cbaed62bdb'] = $pane;
$display->panels['left'][0] = 'new-bc1d7e89-bc71-4c2f-ab04-97cbaed62bdb';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;