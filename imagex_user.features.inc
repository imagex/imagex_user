<?php
/**
 * @file
 * imagex_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
