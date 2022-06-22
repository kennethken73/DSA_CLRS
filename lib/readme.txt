/lib && /include

My directory-stucture rationale:






The /lib directory is for compilation resources
meant for consumption by multiple src sub-projects,
where the primary src sub-directory is renamed
to be the same as the project itself, and
all other sub-projects named otherwise.

For a typical project with one src directory, leave src named as-is, and place
compilation resources meant for consumption solely by src inside src/include.

Where there are multiple /src sub-projects,
place sub-project-specific compilation-consumables
at their respective /src_name/include,
and place compilation-consumables meant for shared access
(say by /project-root/src_1 and /project-root/src_2)
at /project-root/lib/

