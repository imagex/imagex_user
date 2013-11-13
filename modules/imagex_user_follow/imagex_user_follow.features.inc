<?php
/**
 * @file
 * imagex_user_follow.features.inc
 */

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function imagex_user_follow_panelizer_defaults_override_alter(&$data) {
  if (isset($data['user:user:default'])) {
    $data['user:user:default']->display->content['new-2'] = (object) array(
          'pid' => 'new-2',
          'panel' => 'center',
          'type' => 'block',
          'subtype' => 'follow-user',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
        ); /* WAS: '' */
    $data['user:user:default']->display->panels['center']['1'] = 'new-2'; /* WAS: '' */
  }
}
