<?php
/**
 * @file
 * global_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function global_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_cache';
  $strongarm->value = 1;
  $export['block_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache';
  $strongarm->value = 1;
  $export['cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_class_cache_ctools_css';
  $strongarm->value = 'CToolsCssCache';
  $export['cache_class_cache_ctools_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_lifetime';
  $strongarm->value = '0';
  $export['cache_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = 0;
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'context_block_rebuild_needed';
  $strongarm->value = TRUE;
  $export['context_block_rebuild_needed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_key';
  $strongarm->value = 'iVybzwsBUaY5u6LHIUhhGt3MHuGMEFK-tcvRV7Aktqs';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1448395572;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'nyanbg';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1448293041;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'America/Costa_Rica';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_css_cache_files';
  $strongarm->value = array(
    '823ba1006db72809515d2221cd02ec1075d7b49b0c07f49307b3a7930bfdd9e4' => 'public://css/css_xE-rWrJf-fncB6ztZfd2huxqgxu4WO-qwma6Xer30m4.css',
    '032d72e2b3124645b11e59c23005327dc2b450af6aaa6bf3cad34a6a65a9d774' => 'public://css/css_ZDWl28hdmeinIcKg-HMrN6uKD0nTMld5NlXLmm5MH2U.css',
    '3451a39a0a82882d941dd24dc4b896a357a63603fbe6ee2724eab3cdc037b17e' => 'public://css/css_Bx15Bkhh0lhHjVPRnFKr6Gcd6anCB2KGoPC6lnlTuGQ.css',
    '0af5e4de6c3a850b6a6d69d45f1ca3e0d9cbeab1dbef696e1dab451339d3bc2b' => 'public://css/css_qpOzV1lH67WnT3sQsoNxP_EzyBctGJS-oOEH9FdR0Qc.css',
    'ebb3f433ad4107b1ac31e9d7de0f9a5d399040e9f82b6364211dcfaadea158c0' => 'public://css/css_Nv0ct-zkzztuah_LbaPFF8ZkdSEk-LxBtTWMm9mN_F8.css',
    '1c36101f305446b1b88af3ae50209ee3c713f1f7ffbbb30629a37d65198330fa' => 'public://css/css_1FuaQyNpeoGilFLg6GsDTprte9QHfko-0ntzSWCraiQ.css',
    'f05494fc83c9c8e2c74180252d01c9ea50f347143d606c3ea4a216ea0f24ce6e' => 'public://css/css_BR3eb_ceEn8jEAv9rAj8_gjpfC6A1BpCm8JGn5sUfnY.css',
    '592db66916e1dd3416cbe95bcb34a5a68775eb0b7cf95e4c858671de35290cc9' => 'public://css/css_LS9OUalDR9-d_lCAvF3yUWjNU6yF8ZBm84jEPRvoyuQ.css',
    '054f31940b14f40b3ba3d2c031cbd195f62966e0812a7c320150ebd2c5e9b0ed' => 'public://css/css_8xxkHkNTnW2Y4QTl4PV-YjuQZdQEVlhNqQHSmZ2x08U.css',
    '3a61cd73fcde5d5ac9a91af3efb525885d8ffe4e265690f1f817800cd0cd9012' => 'public://css/css_ZHRBGYLkoq6SPejgYvQaLihXlGIR5hpB4AUJApemgmo.css',
    'fb99f59634ca50e0fba4e84e68023155e5b29a96985d8a76309ce0a0db1009a9' => 'public://css/css_jIvZpVfuY4FgJzZ7mYHIG4cYOyD0nJ03Bw5wiLVkAh8.css',
    '0d2953cc1222a66489bef055671619a8f69907ad6f22a3fc30703592f1a59d97' => 'public://css/css_xAZnRVsE2Ej6MutPJlTqMjq3IkTn2bIOW-PqfEkCBXc.css',
  );
  $export['drupal_css_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_js_cache_files';
  $strongarm->value = array(
    'a571bc4156d0556568d7f04bc93f81c658b2e21fef9bb8229528c077ce9a0ccf' => 'public://js/js_UWQINlriydSoeSiGQxToOUdv493zEa7dpsXC1OtYlZU.js',
    'dc589b931794ec265c5d55262b3866518c4b47f9ba802d69485397c7b7b7a77e' => 'public://js/js_YG82hrJHloYtiAgodMftPUgRoUSS3dqXQsi0bze1iqY.js',
    'f61b9db830350055d5ace3d3163958ed44e221ac0c8cd819020d9529ecb5cb36' => 'public://js/js_VuH1z-PRXSqkF15tbZhNTFeQi8KUjGswvcyXpn84oyY.js',
    '1b345f5155a86afb0fc4a6a27c1eb2b8a2cca501601803d7a13e9f835998c1c4' => 'public://js/js_bQ10kqiSuKVK8V2kh_pZonHKqnj8Ww0lLjCna4lTiWI.js',
    '5233381afebfe4d04eff4f1f6b68827b39c60e879c13a969a481988a56af2310' => 'public://js/js_K3a-OxJOx50zlsaTUP6nd0yCq_FtXswu4RGpp_CN018.js',
    'be5f75d67eeb80fad9b966eab19f57ad99ffb5c4f78f0ae61cbdc9186ffc3ca1' => 'public://js/js_u5PpeO2y-2xgIRf4a9v1HW1sA5p2bBIDmBH8JsdktA8.js',
    '572d229946cfc94573d1b41240c9ee70531334413097fadfaa34b93467e6c7d6' => 'public://js/js_nyhRfvT3G0O_yE5xvilF1OwqvbGkcQ6PIhmVeNf-Y2g.js',
    '075c14d2a0311af146c64341fae1a7e4d71dc24e0e6f427c010b13267e2d6d01' => 'public://js/js_zDLFIOd6XtmQ4OSyu2tpmZH5UPI-FSEVDtjPdthwmM4.js',
    '51912aefbf90d2b4c80dc023695195a4a09bbacab0da67175cf67ec1a3e7b803' => 'public://js/js_cyMM8LWJnjj9HKH-29oT6CebO_jNPJEicmEd7Ldra9o.js',
    '2c054b7cc0b4156e57d587f929131fc59313b6e9f4de52e38f2bc61c08364d0e' => 'public://js/js_BsRkrPU9blcGysBlwulbtF7cZ1SJ0jebStw4btmANfA.js',
    '2fc6144f0e7ca286e360cade80279ed3d91426c4899fc597a15a73a2e2fdef22' => 'public://js/js_GA3uOoZyw11qKwkd-0KmNizpn97m7ZrMisYSQgrRvo4.js',
  );
  $export['drupal_js_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = 'IqNGRMzyVD-81p5A9PrAQNto0DzSI6uMsh7Novw2tEA';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'products' => array(
      'node' => '18e9072d54d52878ac12ceb19a059c87',
      'variable' => '3f2300de419e0494aedbfa5b7c366edc',
      'field_base' => '44dc55276eb31f502197dcfd83e292a1',
      'field_instance' => '76802718695ce23e6deff83bea93db65',
      'menu_custom' => '2042931cc12c0466aab8fc8a74f2d400',
      'taxonomy' => '627f51e16a75e03662b92d4f3dc00275',
      'dependencies' => 'd95d7a5d4f52a41de13c8fab4e38a8ee',
      'ds_field_settings' => '9fac15e633eb0dab7235971c9e6c1ba3',
      'ds_layout_settings' => '35d8e139f538ec3c7247db9e3bd00a3a',
      'views_view' => '51481950e484855939471ec892e071a6',
    ),
    'global_configuration' => array(
      'variable' => '87764142d6080a0cd730585d88b7558f',
      'filter' => 'e1ba718b9bb5189bfb3604dcce922498',
      'user_role' => '57d23ee3deb6e9262fa3b2617586b072',
      'user_permission' => '975e88d8c9b694f54dabd063e19839ce',
      'dependencies' => 'b256a12fcb903c8834cc4578198f1e00',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_modules_changed';
  $strongarm->value = FALSE;
  $export['features_modules_changed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_semaphore';
  $strongarm->value = array();
  $export['features_semaphore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'pantheon';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1448042657;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array();
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 501,
    1 => 493,
    2 => 250,
    3 => 247,
    4 => 246,
    5 => 245,
    6 => 125,
    7 => 124,
    8 => 123,
    9 => 122,
    10 => 121,
    11 => 117,
    12 => 63,
    13 => 62,
    14 => 61,
    15 => 60,
    16 => 59,
    17 => 58,
    18 => 44,
    19 => 31,
    20 => 30,
    21 => 29,
    22 => 28,
    23 => 27,
    24 => 24,
    25 => 21,
    26 => 15,
    27 => 14,
    28 => 13,
    29 => 11,
    30 => 7,
    31 => 6,
    32 => 5,
    33 => 3,
    34 => 2,
    35 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_recent_modules';
  $strongarm->value = array(
    'admin_menu_toolbar' => 1448050239,
    'ds' => 1448058014,
    'features' => 1448058066,
    'pathauto' => 1448058066,
    'strongarm' => 1448058066,
    'views' => 1448058066,
    'views_ui' => 1448058066,
    'wysiwyg' => 1448058098,
    'devel' => 1448058222,
    'devel_generate' => 1448058222,
    'context' => 1448061217,
    'context_layouts' => 1448061217,
    'context_ui' => 1448061217,
  );
  $export['module_filter_recent_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = '1';
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = FALSE;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = '900';
  $export['page_cache_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_compression';
  $strongarm->value = 0;
  $export['page_compression'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_css';
  $strongarm->value = 1;
  $export['preprocess_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_js';
  $strongarm->value = 1;
  $export['preprocess_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    'apachesolr_search' => 'apachesolr_search',
    'user' => 'user',
    'node' => 0,
  );
  $export['search_active_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_default_module';
  $strongarm->value = 'apachesolr_search';
  $export['search_default_module'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'CR';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'josue_0509@hotmail.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Underground Market';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'underground';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_check';
  $strongarm->value = 1448395601;
  $export['update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_email_notification';
  $strongarm->value = 1448395572;
  $export['update_last_email_notification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notify_emails';
  $strongarm->value = array(
    0 => 'josue_0509@hotmail.com',
  );
  $export['update_notify_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = '1';
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'thumbnail';
  $export['user_picture_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = 2;
  $export['user_register'] = $strongarm;

  return $export;
}
