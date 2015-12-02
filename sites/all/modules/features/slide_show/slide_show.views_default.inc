<?php
/**
 * @file
 * slide_show.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function slide_show_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slide_show_main';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slide Show Main';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'slide';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: SlideShow */
  $handler->display->display_options['fields']['field_slideshow']['id'] = 'field_slideshow';
  $handler->display->display_options['fields']['field_slideshow']['table'] = 'field_data_field_slideshow';
  $handler->display->display_options['fields']['field_slideshow']['field'] = 'field_slideshow';
  $handler->display->display_options['fields']['field_slideshow']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slideshow']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slideshow']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow']['delta_offset'] = '0';
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
    'slide_show' => 'slide_show',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['slide_show_main'] = $view;

  return $export;
}
