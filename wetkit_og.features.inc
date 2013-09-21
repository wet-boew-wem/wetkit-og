<?php
/**
 * @file
 * wetkit_og.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wetkit_og_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_og_membership_type().
 */
function wetkit_og_default_og_membership_type() {
  $items = array();
  $items['wetkit_og_content_editor'] = entity_import('og_membership_type', '{
    "name" : "wetkit_og_content_editor",
    "description" : "Content Editor",
    "language" : ""
  }');
  return $items;
}
