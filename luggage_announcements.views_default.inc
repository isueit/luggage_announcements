<?php
/**
 * @file
 * luggage_announcements.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function luggage_announcements_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'luggage_announcements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Announcements';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '35';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'search_result';
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'search_result';
  /* Field: Content: Banner Image */
  $handler->display->display_options['fields']['field_announcement_image']['id'] = 'field_announcement_image';
  $handler->display->display_options['fields']['field_announcement_image']['table'] = 'field_data_field_announcement_image';
  $handler->display->display_options['fields']['field_announcement_image']['field'] = 'field_announcement_image';
  $handler->display->display_options['fields']['field_announcement_image']['label'] = '';
  $handler->display->display_options['fields']['field_announcement_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_announcement_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_announcement_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_announcement_body']['id'] = 'field_announcement_body';
  $handler->display->display_options['fields']['field_announcement_body']['table'] = 'field_data_field_announcement_body';
  $handler->display->display_options['fields']['field_announcement_body']['field'] = 'field_announcement_body';
  $handler->display->display_options['fields']['field_announcement_body']['label'] = '';
  $handler->display->display_options['fields']['field_announcement_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_announcement_body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_announcement_body']['settings'] = array(
    'trim_length' => '600',
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'announcement' => 'announcement',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: Listing */
  $handler = $view->new_display('page', 'Listing', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Announcements';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_announcement_body']['id'] = 'field_announcement_body';
  $handler->display->display_options['fields']['field_announcement_body']['table'] = 'field_data_field_announcement_body';
  $handler->display->display_options['fields']['field_announcement_body']['field'] = 'field_announcement_body';
  $handler->display->display_options['fields']['field_announcement_body']['label'] = '';
  $handler->display->display_options['fields']['field_announcement_body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['field_announcement_body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_announcement_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_announcement_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_announcement_body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_announcement_body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Banner Image */
  $handler->display->display_options['fields']['field_announcement_image']['id'] = 'field_announcement_image';
  $handler->display->display_options['fields']['field_announcement_image']['table'] = 'field_data_field_announcement_image';
  $handler->display->display_options['fields']['field_announcement_image']['field'] = 'field_announcement_image';
  $handler->display->display_options['fields']['field_announcement_image']['label'] = '';
  $handler->display->display_options['fields']['field_announcement_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_announcement_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_announcement_image']['settings'] = array(
    'image_style' => 'flexslider_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['path'] = 'announcements';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Announcements';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Announcement Slider */
  $handler = $view->new_display('block', 'Announcement Slider', 'announcement_slider');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'announcemant_slider';
  $handler->display->display_options['style_options']['captionfield'] = 'field_announcement_caption';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_announcement_background_im' => 'field_announcement_background_im',
    'title' => 'title',
    'field_announcement_body' => 'field_announcement_body',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Alternate Url */
  $handler->display->display_options['fields']['field_announcement_alternate_url']['id'] = 'field_announcement_alternate_url';
  $handler->display->display_options['fields']['field_announcement_alternate_url']['table'] = 'field_data_field_announcement_alternate_url';
  $handler->display->display_options['fields']['field_announcement_alternate_url']['field'] = 'field_announcement_alternate_url';
  $handler->display->display_options['fields']['field_announcement_alternate_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_announcement_alternate_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_announcement_alternate_url']['type'] = 'link_url';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_announcement_caption']['id'] = 'field_announcement_caption';
  $handler->display->display_options['fields']['field_announcement_caption']['table'] = 'field_data_field_announcement_caption';
  $handler->display->display_options['fields']['field_announcement_caption']['field'] = 'field_announcement_caption';
  $handler->display->display_options['fields']['field_announcement_caption']['label'] = '';
  $handler->display->display_options['fields']['field_announcement_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_announcement_caption']['element_label_colon'] = FALSE;
  /* Field: Content: Banner Image */
  $handler->display->display_options['fields']['field_announcement_image']['id'] = 'field_announcement_image';
  $handler->display->display_options['fields']['field_announcement_image']['table'] = 'field_data_field_announcement_image';
  $handler->display->display_options['fields']['field_announcement_image']['field'] = 'field_announcement_image';
  $handler->display->display_options['fields']['field_announcement_image']['label'] = '';
  $handler->display->display_options['fields']['field_announcement_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_announcement_image']['alter']['path'] = '[field_announcement_alternate_url] ';
  $handler->display->display_options['fields']['field_announcement_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_announcement_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_announcement_image']['element_wrapper_class'] = 'announcement-img';
  $handler->display->display_options['fields']['field_announcement_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_announcement_image']['settings'] = array(
    'image_style' => 'announcement_full',
    'image_link' => '',
  );
  $handler->display->display_options['block_description'] = 'announcement_slider';
  $export['luggage_announcements'] = $view;

  return $export;
}
