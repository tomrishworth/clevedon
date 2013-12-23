<?php
/**
 * @file
 * local_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function local_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'a_z_business_lisitings';
  $view->description = 'A list of all content, by letter.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'A-Z Business Lisitings';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Local Directory';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Show All';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_business_category_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'nid-[nid]';
  $handler->display->display_options['style_options']['wrapper_class'] = 'directory-list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '32';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_business_phone']['id'] = 'field_business_phone';
  $handler->display->display_options['fields']['field_business_phone']['table'] = 'field_data_field_business_phone';
  $handler->display->display_options['fields']['field_business_phone']['field'] = 'field_business_phone';
  $handler->display->display_options['fields']['field_business_phone']['label'] = '';
  $handler->display->display_options['fields']['field_business_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Address - Line 1 */
  $handler->display->display_options['fields']['field_business_address_line1']['id'] = 'field_business_address_line1';
  $handler->display->display_options['fields']['field_business_address_line1']['table'] = 'field_data_field_business_address_line1';
  $handler->display->display_options['fields']['field_business_address_line1']['field'] = 'field_business_address_line1';
  $handler->display->display_options['fields']['field_business_address_line1']['label'] = '';
  $handler->display->display_options['fields']['field_business_address_line1']['element_label_colon'] = FALSE;
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_business_email']['id'] = 'field_business_email';
  $handler->display->display_options['fields']['field_business_email']['table'] = 'field_data_field_business_email';
  $handler->display->display_options['fields']['field_business_email']['field'] = 'field_business_email';
  $handler->display->display_options['fields']['field_business_email']['label'] = '';
  $handler->display->display_options['fields']['field_business_email']['element_label_colon'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_business_website']['id'] = 'field_business_website';
  $handler->display->display_options['fields']['field_business_website']['table'] = 'field_data_field_business_website';
  $handler->display->display_options['fields']['field_business_website']['field'] = 'field_business_website';
  $handler->display->display_options['fields']['field_business_website']['label'] = '';
  $handler->display->display_options['fields']['field_business_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_business_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_business_website']['type'] = 'link_domain';
  $handler->display->display_options['fields']['field_business_website']['settings'] = array(
    'strip_www' => 1,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'More info »';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_lisiting' => 'business_lisiting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Business Category (field_business_category) */
  $handler->display->display_options['filters']['field_business_category_tid']['id'] = 'field_business_category_tid';
  $handler->display->display_options['filters']['field_business_category_tid']['table'] = 'field_data_field_business_category';
  $handler->display->display_options['filters']['field_business_category_tid']['field'] = 'field_business_category_tid';
  $handler->display->display_options['filters']['field_business_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_business_category_tid']['expose']['operator_id'] = 'field_business_category_tid_op';
  $handler->display->display_options['filters']['field_business_category_tid']['expose']['operator'] = 'field_business_category_tid_op';
  $handler->display->display_options['filters']['field_business_category_tid']['expose']['identifier'] = 'field_business_category_tid';
  $handler->display->display_options['filters']['field_business_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_business_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_business_category_tid']['vocabulary'] = 'business_category';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'local-directory';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Glossary';
  $handler->display->display_options['menu']['weight'] = '0';
  $export['a_z_business_lisitings'] = $view;

  $view = new view();
  $view->name = 'accommodation_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Accommodation Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Clevedon Accommodation Map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'geofield_map_map';
  $handler->display->display_options['style_options']['data_source'] = 'field_map';
  $handler->display->display_options['style_options']['popup_source'] = 'title';
  $handler->display->display_options['style_options']['geofield_map_height'] = '800px';
  $handler->display->display_options['style_options']['geofield_map_zoom'] = '17';
  $handler->display->display_options['style_options']['geofield_map_draggable'] = 1;
  /* Field: Content: Slideshow Images */
  $handler->display->display_options['fields']['field_business_slideshow_images']['id'] = 'field_business_slideshow_images';
  $handler->display->display_options['fields']['field_business_slideshow_images']['table'] = 'field_data_field_business_slideshow_images';
  $handler->display->display_options['fields']['field_business_slideshow_images']['field'] = 'field_business_slideshow_images';
  $handler->display->display_options['fields']['field_business_slideshow_images']['label'] = '';
  $handler->display->display_options['fields']['field_business_slideshow_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_business_slideshow_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_business_slideshow_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_business_slideshow_images']['settings'] = array(
    'image_style' => '150x100',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_business_slideshow_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_business_slideshow_images']['delta_offset'] = '0';
  /* Field: Content: Address - Line 1 */
  $handler->display->display_options['fields']['field_business_address_line1']['id'] = 'field_business_address_line1';
  $handler->display->display_options['fields']['field_business_address_line1']['table'] = 'field_data_field_business_address_line1';
  $handler->display->display_options['fields']['field_business_address_line1']['field'] = 'field_business_address_line1';
  $handler->display->display_options['fields']['field_business_address_line1']['label'] = '';
  $handler->display->display_options['fields']['field_business_address_line1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_business_address_line1']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Details';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div id="map-info">
[title]</br>
[field_business_slideshow_images]</br>
[field_business_address_line1]</br>
[view_node]
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Map */
  $handler->display->display_options['fields']['field_map']['id'] = 'field_map';
  $handler->display->display_options['fields']['field_map']['table'] = 'field_data_field_map';
  $handler->display->display_options['fields']['field_map']['field'] = 'field_map';
  $handler->display->display_options['fields']['field_map']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_map']['settings'] = array(
    'data' => 'full',
  );
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
  /* Filter criterion: Content: Business Category (field_business_category) */
  $handler->display->display_options['filters']['field_business_category_tid']['id'] = 'field_business_category_tid';
  $handler->display->display_options['filters']['field_business_category_tid']['table'] = 'field_data_field_business_category';
  $handler->display->display_options['filters']['field_business_category_tid']['field'] = 'field_business_category_tid';
  $handler->display->display_options['filters']['field_business_category_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_business_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_business_category_tid']['vocabulary'] = 'business_category';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'accommodation-map';
  $export['accommodation_map'] = $view;

  return $export;
}
