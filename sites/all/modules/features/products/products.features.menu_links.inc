<?php
/**
 * @file
 * products.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function products_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_video-embed-field:admin/config/media/vef
  $menu_links['management_video-embed-field:admin/config/media/vef'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/vef',
    'router_path' => 'admin/config/media/vef',
    'link_title' => 'Video Embed Field',
    'options' => array(
      'attributes' => array(
        'title' => 'Video Embed Field configuration',
      ),
      'identifier' => 'management_video-embed-field:admin/config/media/vef',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_media:admin/config/media',
  );
  // Exported menu link: management_video-embed-styles:admin/config/media/vef/vef_video_styles
  $menu_links['management_video-embed-styles:admin/config/media/vef/vef_video_styles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/vef/vef_video_styles',
    'router_path' => 'admin/config/media/vef/vef_video_styles',
    'link_title' => 'Video Embed Styles',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer Video Embed Field\'s video styles.',
      ),
      'identifier' => 'management_video-embed-styles:admin/config/media/vef/vef_video_styles',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_video-embed-field:admin/config/media/vef',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Video Embed Field');
  t('Video Embed Styles');

  return $menu_links;
}
