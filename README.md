## ImageX User

This feature provides a basic user profile layout via panelizer. 

This feature is aware of (but not dependant on) the following ImageX features & automatically places them into the user panelizer default layout:

* ImageX User Follow - subfeature of this feature
* [ImageX Activity](https://github.com/imagex/imagex_activity)

If either module is not enabled Panels will display a "missing pane" messages on the Panels admin UI which is not critical nor does it breaks any functionality.

### Add new panes to the user panelizer defaults

There are limitation with panelizer & features overrides not being able to handle multiple overrides of the same component which results in features conflict if, for example more than one feature tries to override the user panelizer defaults.

Therefore, if you are developing a new imagex features (none project specific) and want to add panes to the user panelizer defaults you should add the pane placement to this feature not the newly developed feature.

*Example:*
ImageX Activity provides & exports the views pane "ImageX Activity" but the pane placement within the user panelizer default layout is exported in imagex_user.

### Project specific overrides

To override the default panelizer layout you should use feautres overrides & export the overrides to a singular project specific feature (ie. PROJECTNAME_user). Make the overrides feature dependant on imagex_user.

Once panelizer & features overrides are able to "merge" multile overrides into one a more "pluggable" solution can be developed.