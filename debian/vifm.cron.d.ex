#
# Regular cron jobs for the vifm package
#
0 4	* * *	root	[ -x /usr/bin/vifm_maintenance ] && /usr/bin/vifm_maintenance
