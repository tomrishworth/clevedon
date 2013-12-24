<?php
/**
 * @file
 * thigs_to_do.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function thigs_to_do_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'things_to_do';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Things to do';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'listing_box';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|title';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'listing_box';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="btn" href="/walks-map">View Walks on a Map</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Slideshow Images */
  $handler->display->display_options['fields']['field_business_slideshow_images']['id'] = 'field_business_slideshow_images';
  $handler->display->display_options['fields']['field_business_slideshow_images']['table'] = 'field_data_field_business_slideshow_images';
  $handler->display->display_options['fields']['field_business_slideshow_images']['field'] = 'field_business_slideshow_images';
  $handler->display->display_options['fields']['field_business_slideshow_images']['label'] = '';
  $handler->display->display_options['fields']['field_business_slideshow_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_business_slideshow_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_business_slideshow_images']['settings'] = array(
    'image_style' => '150x100',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_business_slideshow_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_business_slideshow_images']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Things to do - Attractions */
  $handler = $view->new_display('panel_pane', 'Things to do - Attractions', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Attractions & Activities';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'business_lisiting' => 'business_lisiting',
  );
  /* Filter criterion: Content: Business Category (field_business_category) */
  $handler->display->display_options['filters']['field_business_category_tid']['id'] = 'field_business_category_tid';
  $handler->display->display_options['filters']['field_business_category_tid']['table'] = 'field_data_field_business_category';
  $handler->display->display_options['filters']['field_business_category_tid']['field'] = 'field_business_category_tid';
  $handler->display->display_options['filters']['field_business_category_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_business_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_business_category_tid']['vocabulary'] = 'business_category';
  $handler->display->display_options['pane_title'] = 'Things to do - attractions';

  /* Display: Things to do - walks */
  $handler = $view->new_display('panel_pane', 'Things to do - walks', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Walks to do from Clevedon';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="btn" href="/walks-map">View Map of Walks</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'walks_' => 'walks_',
  );
  $export['things_to_do'] = $view;

  return $export;
}
