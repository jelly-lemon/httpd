/*
**  apapi_compat.h -- Apache API symbol space
**                    backward compatibility defines
**
**  INCLUDE THIS HEADER FILE ONLY IF YOU REALLY NEED
**  BACKWARD COMPATIBILITY FOR USED API SYMBOLS.
*/

#ifndef APAPI_COMPAT_H
#define APAPI_COMPAT_H

/* 
 *   Mapping of Apache 1.2 symbols to 
 *   official Apache 1.3 API symbols
 */

#define MD5Final                       ap_MD5Final
#define MD5Init                        ap_MD5Init
#define MD5Update                      ap_MD5Update
#define add_cgi_vars                   ap_add_cgi_vars
#define add_common_vars                ap_add_common_vars
#define add_module                     ap_add_module
#define add_named_module               ap_add_named_module
#define allow_options                  ap_allow_options
#define allow_overrides                ap_allow_overrides
#define apapi_get_server_built         ap_get_server_built
#define apapi_get_server_version       ap_get_server_version
#define aplog_error                    ap_log_error
#define append_arrays                  ap_append_arrays
#define array_cat                      ap_array_cat
#define auth_name                      ap_auth_name
#define auth_type                      ap_auth_type
#define basic_http_header              ap_basic_http_header
#define bclose                         ap_bclose
#define bcreate                        ap_bcreate
#define bfilbuf                        ap_bfilbuf
#define bfileno                        ap_bfileno
#define bflsbuf                        ap_bflsbuf
#define bflush                         ap_bflush
#define bgetopt                        ap_bgetopt
#define bgets                          ap_bgets
#define bhalfduplex                    ap_bhalfduplex
#define block_alarms                   ap_block_alarms
#define blookc                         ap_blookc
#define bnonblock                      ap_bnonblock
#define bonerror                       ap_bonerror
#define bpushfd                        ap_bpushfd
#define bputs                          ap_bputs
#define bread                          ap_bread
#define bsetflag                       ap_bsetflag
#define bsetopt                        ap_bsetopt
#define bskiplf                        ap_bskiplf
#define bwrite                         ap_bwrite
#define bytes_in_free_blocks           ap_bytes_in_free_blocks
#define bytes_in_pool                  ap_bytes_in_pool
#define call_exec                      ap_call_exec
#define can_exec                       ap_can_exec
#define cfg_closefile                  ap_cfg_closefile
#define cfg_getc                       ap_cfg_getc
#define cfg_getline                    ap_cfg_getline
#define chdir_file                     ap_chdir_file
#define check_cmd_context              ap_check_cmd_context
#define checkmask                      ap_checkmask
#define child_terminate                ap_child_terminate
#define cleanup_for_exec               ap_cleanup_for_exec
#define clear_module_list              ap_clear_module_list
#define clear_pool                     ap_clear_pool
#define clear_table                    ap_clear_table
#define close_piped_log                ap_close_piped_log
#define construct_server               ap_construct_server
#define construct_url                  ap_construct_url
#define copy_array                     ap_copy_array
#define copy_array_hdr                 ap_copy_array_hdr
#define copy_table                     ap_copy_table
#define count_dirs                     ap_count_dirs
#define create_environment             ap_create_environment
#define create_per_dir_config          ap_create_per_dir_config
#define default_port_for_request       ap_default_port_for_request
#define default_port_for_scheme        ap_default_port_for_scheme
#define default_type                   ap_default_type
#define destroy_pool                   ap_destroy_pool
#define destroy_sub_req                ap_destroy_sub_req
#define discard_request_body           ap_discard_request_body
#define document_root                  ap_document_root
#define each_byterange                 ap_each_byterange
#define error_log2stderr               ap_error_log2stderr
#define escape_html                    ap_escape_html
#define escape_path_segment            ap_escape_path_segment
#define escape_shell_cmd               ap_escape_shell_cmd
#define exists_scoreboard_image        ap_exists_scoreboard_image
#define find_last_token                ap_find_last_token
#define find_linked_module             ap_find_linked_module
#define find_module_name               ap_find_module_name
#define find_path_info                 ap_find_path_info
#define find_pool                      ap_find_pool
#define find_token                     ap_find_token
#define get_basic_auth_pw              ap_get_basic_auth_pw
#define get_client_block               ap_get_client_block
#define get_gmtoff                     ap_get_gmtoff
#define get_module_config              ap_get_module_config
#define get_remote_host                ap_get_remote_host
#define get_remote_logname             ap_get_remote_logname
#define get_server_name                ap_get_server_name
#define get_server_port                ap_get_server_port
#define get_time                       ap_get_time
#define get_token                      ap_get_token
#define getparents                     ap_getparents
#define getword                        ap_getword
#define getword_conf                   ap_getword_conf
#define getword_conf_nc                ap_getword_conf_nc
#define getword_nc                     ap_getword_nc
#define getword_nulls                  ap_getword_nulls
#define getword_nulls_nc               ap_getword_nulls_nc
#define getword_white                  ap_getword_white
#define getword_white_nc               ap_getword_white_nc
#define gm_timestr_822                 ap_gm_timestr_822
#define gname2id                       ap_gname2id
#define hard_timeout                   ap_hard_timeout
#define ht_time                        ap_ht_time
#define ind                            ap_ind
#define index_of_response              ap_index_of_response
#define internal_redirect              ap_internal_redirect
#define internal_redirect_handler      ap_internal_redirect_handler
#define is_directory                   ap_is_directory
#define is_initial_req                 ap_is_initial_req
#define is_matchexp                    ap_is_matchexp
#define is_url                         ap_is_url
#define kill_cleanup                   ap_kill_cleanup
#define kill_cleanups_for_fd           ap_kill_cleanups_for_fd
#define kill_cleanups_for_socket       ap_kill_cleanups_for_socket
#define kill_timeout                   ap_kill_timeout
#define log_assert                     ap_log_assert
#define log_error                      ap_log_error
#define log_printf                     ap_log_printf
#define log_reason                     ap_log_reason
#define log_unixerr                    ap_log_unixerr
#define make_array                     ap_make_array
#define make_dirstr                    ap_make_dirstr
#define make_dirstr_parent             ap_make_dirstr_parent
#define make_dirstr_prefix             ap_make_dirstr_prefix
#define make_full_path                 ap_make_full_path
#define make_sub_pool                  ap_make_sub_pool
#define make_table                     ap_make_table
#define matches_request_vhost          ap_matches_request_vhost
#define meets_conditions               ap_meets_conditions
#define no2slash                       ap_no2slash
#define note_auth_failure              ap_note_auth_failure
#define note_basic_auth_failure        ap_note_basic_auth_failure
#define note_cleanups_for_fd           ap_note_cleanups_for_fd
#define note_cleanups_for_file         ap_note_cleanups_for_file
#define note_cleanups_for_socket       ap_note_cleanups_for_socket
#define note_digest_auth_failure       ap_note_digest_auth_failure
#define note_subprocess                ap_note_subprocess
#define open_piped_log                 ap_open_piped_log
#define os_escape_path                 ap_os_escape_path
#define overlay_tables                 ap_overlay_tables
#define palloc                         ap_palloc
#define parseHTTPdate                  ap_parseHTTPdate
#define parse_hostinfo_components      ap_parse_hostinfo_components
#define parse_uri_components           ap_parse_uri_components
#define pcalloc                        ap_pcalloc
#define pcfg_open_custom               ap_pcfg_open_custom
#define pcfg_openfile                  ap_pcfg_openfile
#define pclosedir                      ap_pclosedir
#define pclosef                        ap_pclosef
#define pclosesocket                   ap_pclosesocket
#define pduphostent                    ap_pduphostent
#define pfclose                        ap_pfclose
#define pfdopen                        ap_pfdopen
#define pfopen                         ap_pfopen
#define pgethostbyname                 ap_pgethostbyname
#define pool_is_ancestor               ap_pool_is_ancestor
#define pool_join                      ap_pool_join
#define popendir                       ap_popendir
#define popenf                         ap_popenf
#define pregcomp                       ap_pregcomp
#define pregfree                       ap_pregfree
#define pregsub                        ap_pregsub
#define psignature                     ap_psignature
#define psocket                        ap_psocket
#define pstrdup                        ap_pstrdup
#define pstrndup                       ap_pstrndup
#define push_array                     ap_push_array
#define pvsprintf                      ap_pvsprintf
#define rationalize_mtime              ap_rationalize_mtime
#define register_cleanup               ap_register_cleanup
#define remove_module                  ap_remove_module
#define requires                       ap_requires
#define reset_timeout                  ap_reset_timeout
#define rflush                         ap_rflush
#define rind                           ap_rind
#define rprintf                        ap_rprintf
#define rputc                          ap_rputc
#define rputs                          ap_rputs
#define run_cleanup                    ap_run_cleanup
#define run_sub_req                    ap_run_sub_req
#define rwrite                         ap_rwrite
#define satisfies                      ap_satisfies
#define scan_script_header_err         ap_scan_script_header_err
#define scan_script_header_err_buff    ap_scan_script_header_err_buff
#define send_fb                        ap_send_fb
#define send_fb_length                 ap_send_fb_length
#define send_fd                        ap_send_fd
#define send_fd_length                 ap_send_fd_length
#define send_http_header               ap_send_http_header
#define send_mmap                      ap_send_mmap
#define send_size                      ap_send_size
#define server_root_relative           ap_server_root_relative
#define set_byterange                  ap_set_byterange
#define set_content_length             ap_set_content_length
#define set_etag                       ap_set_etag
#define set_keepalive                  ap_set_keepalive
#define set_last_modified              ap_set_last_modified
#define set_module_config              ap_set_module_config
#define setup_client_block             ap_setup_client_block
#define should_client_block            ap_should_client_block
#define soft_timeout                   ap_soft_timeout
#define some_auth_required             ap_some_auth_required
#define spawn_child_err                ap_spawn_child_err
#define spawn_child_err_buff           ap_spawn_child_err_buff
#define srm_command_loop               ap_srm_command_loop
#define str_tolower                    ap_str_tolower
#define strcasecmp_match               ap_strcasecmp_match
#define strcmp_match                   ap_strcmp_match
#define sub_req_lookup_file            ap_sub_req_lookup_file
#define sub_req_lookup_uri             ap_sub_req_lookup_uri
#define sync_scoreboard_image          ap_sync_scoreboard_image
#define table_add                      ap_table_add
#define table_addn                     ap_table_addn
#define table_get                      ap_table_get
#define table_merge                    ap_table_merge
#define table_mergen                   ap_table_mergen
#define table_set                      ap_table_set
#define table_setn                     ap_table_setn
#define table_unset                    ap_table_unset
#define tm2sec                         ap_tm2sec
#define uname2id                       ap_uname2id
#define unblock_alarms                 ap_unblock_alarms
#define unescape_url                   ap_unescape_url
#define unparse_uri_components         ap_unparse_uri_components
#define update_mtime                   ap_update_mtime
#define uudecode                       ap_uudecode
#define vbprintf                       ap_vbprintf

/* 
 *   Mapping of Apache 1.2 symbols to 
 *   Apache 1.3 symbols which are
 *   _NO LONGER PART OF THE API_
 */

#ifdef APAPI_STRICT

#define add_per_dir_conf               DO_NOT_USE_add_per_dir_conf
#define add_per_url_conf               DO_NOT_USE_add_per_url_conf
#define bind_address                   DO_NOT_USE_bind_address
#define bprintf                        DO_NOT_USE_bprintf
#define bvputs                         DO_NOT_USE_bvputs
#define check_access                   DO_NOT_USE_check_access
#define check_alarm                    DO_NOT_USE_check_alarm
#define check_auth                     DO_NOT_USE_check_auth
#define check_user_id                  DO_NOT_USE_check_user_id
#define child_exit_modules             DO_NOT_USE_child_exit_modules
#define child_init_modules             DO_NOT_USE_child_init_modules
#define core_reorder_directories       DO_NOT_USE_core_reorder_directories
#define coredump_dir                   DO_NOT_USE_coredump_dir
#define create_request_config          DO_NOT_USE_create_request_config
#define daemons_limit                  DO_NOT_USE_daemons_limit
#define daemons_max_free               DO_NOT_USE_daemons_max_free
#define daemons_min_free               DO_NOT_USE_daemons_min_free
#define daemons_to_start               DO_NOT_USE_daemons_to_start
#define day_snames                     DO_NOT_USE_day_snames
#define die                            DO_NOT_USE_die
#define dummy_mutex                    DO_NOT_USE_dummy_mutex
#define excess_requests_per_child      DO_NOT_USE_excess_requests_per_child
#define finalize_request_protocol      DO_NOT_USE_finalize_request_protocol
#define finalize_sub_req_protocol      DO_NOT_USE_finalize_sub_req_protocol
#define find_command                   DO_NOT_USE_find_command
#define find_command_in_modules        DO_NOT_USE_find_command_in_modules
#define find_types                     DO_NOT_USE_find_types
#define fini_vhost_config              DO_NOT_USE_fini_vhost_config
#define fnmatch                        DO_NOT_USE_fnmatch
#define force_library_loading          DO_NOT_USE_force_library_loading
#define get_local_host                 DO_NOT_USE_get_local_host
#define get_virthost_addr              DO_NOT_USE_get_virthost_addr
#define group_id                       DO_NOT_USE_group_id
#define handle_command                 DO_NOT_USE_handle_command
#define header_parse                   DO_NOT_USE_header_parse
#define init_alloc                     DO_NOT_USE_init_alloc
#define init_modules                   DO_NOT_USE_init_modules
#define init_vhost_config              DO_NOT_USE_init_vhost_config
#define init_virtual_host              DO_NOT_USE_init_virtual_host
#define invoke_handler                 DO_NOT_USE_invoke_handler
#define is_fnmatch                     DO_NOT_USE_is_fnmatch
#define keepalive_timeout              DO_NOT_USE_keepalive_timeout
#define limit_section                  DO_NOT_USE_limit_section
#define listenbacklog                  DO_NOT_USE_listenbacklog
#define listeners                      DO_NOT_USE_listeners
#define lock_fname                     DO_NOT_USE_lock_fname
#define log_pid                        DO_NOT_USE_log_pid
#define log_transaction                DO_NOT_USE_log_transaction
#define max_requests_per_child         DO_NOT_USE_max_requests_per_child
#define merge_per_dir_configs          DO_NOT_USE_merge_per_dir_configs
#define month_snames                   DO_NOT_USE_month_snames
#define null_cleanup                   DO_NOT_USE_null_cleanup
#define open_logs                      DO_NOT_USE_open_logs
#define os_is_path_absolute            DO_NOT_USE_os_is_path_absolute
#define parse_htaccess                 DO_NOT_USE_parse_htaccess
#define parse_uri                      DO_NOT_USE_parse_uri
#define parse_vhost_addrs              DO_NOT_USE_parse_vhost_addrs
#define pid_fname                      DO_NOT_USE_pid_fname
#define process_request                DO_NOT_USE_process_request
#define process_resource_config        DO_NOT_USE_process_resource_config
#define proxy_add_header               DO_NOT_USE_proxy_add_header
#define proxy_c2hex                    DO_NOT_USE_proxy_c2hex
#define proxy_cache_check              DO_NOT_USE_proxy_cache_check
#define proxy_cache_error              DO_NOT_USE_proxy_cache_error
#define proxy_cache_tidy               DO_NOT_USE_proxy_cache_tidy
#define proxy_cache_update             DO_NOT_USE_proxy_cache_update
#define proxy_canon_netloc             DO_NOT_USE_proxy_canon_netloc
#define proxy_canonenc                 DO_NOT_USE_proxy_canonenc
#define proxy_connect_handler          DO_NOT_USE_proxy_connect_handler
#define proxy_date_canon               DO_NOT_USE_proxy_date_canon
#define proxy_del_header               DO_NOT_USE_proxy_del_header
#define proxy_doconnect                DO_NOT_USE_proxy_doconnect
#define proxy_ftp_canon                DO_NOT_USE_proxy_ftp_canon
#define proxy_ftp_handler              DO_NOT_USE_proxy_ftp_handler
#define proxy_garbage_coll             DO_NOT_USE_proxy_garbage_coll
#define proxy_garbage_init             DO_NOT_USE_proxy_garbage_init
#define proxy_get_header               DO_NOT_USE_proxy_get_header
#define proxy_hash                     DO_NOT_USE_proxy_hash
#define proxy_hex2c                    DO_NOT_USE_proxy_hex2c
#define proxy_hex2sec                  DO_NOT_USE_proxy_hex2sec
#define proxy_host2addr                DO_NOT_USE_proxy_host2addr
#define proxy_http_canon               DO_NOT_USE_proxy_http_canon
#define proxy_http_handler             DO_NOT_USE_proxy_http_handler
#define proxy_is_domainname            DO_NOT_USE_proxy_is_domainname
#define proxy_is_hostname              DO_NOT_USE_proxy_is_hostname
#define proxy_is_ipaddr                DO_NOT_USE_proxy_is_ipaddr
#define proxy_is_word                  DO_NOT_USE_proxy_is_word
#define proxy_liststr                  DO_NOT_USE_proxy_liststr
#define proxy_log_uerror               DO_NOT_USE_proxy_log_uerror
#define proxy_read_headers             DO_NOT_USE_proxy_read_headers
#define proxy_sec2hex                  DO_NOT_USE_proxy_sec2hex
#define proxy_send_fb                  DO_NOT_USE_proxy_send_fb
#define proxy_send_headers             DO_NOT_USE_proxy_send_headers
#define proxyerror                     DO_NOT_USE_proxyerror
#define psprintf                       DO_NOT_USE_psprintf
#define pstrcat                        DO_NOT_USE_pstrcat
#define read_config                    DO_NOT_USE_read_config
#define read_request                   DO_NOT_USE_read_request
#define register_other_child           DO_NOT_USE_register_other_child
#define response_code_string           DO_NOT_USE_response_code_string
#define restart_time                   DO_NOT_USE_restart_time
#define rfc1413                        DO_NOT_USE_rfc1413
#define rfc1413_timeout                DO_NOT_USE_rfc1413_timeout
#define run_fixups                     DO_NOT_USE_run_fixups
#define run_post_read_request          DO_NOT_USE_run_post_read_request
#define rvputs                         DO_NOT_USE_rvputs
#define scoreboard_fname               DO_NOT_USE_scoreboard_fname
#define scoreboard_image               DO_NOT_USE_scoreboard_image
#define send_error_response            DO_NOT_USE_send_error_response
#define send_header_field              DO_NOT_USE_send_header_field
#define send_http_options              DO_NOT_USE_send_http_options
#define send_http_trace                DO_NOT_USE_send_http_trace
#define server_argv0                   DO_NOT_USE_server_argv0
#define server_confname                DO_NOT_USE_server_confname
#define server_post_read_config        DO_NOT_USE_server_post_read_config
#define server_pre_read_config         DO_NOT_USE_server_pre_read_config
#define server_root                    DO_NOT_USE_server_root
#define set_callback_and_alarm         DO_NOT_USE_set_callback_and_alarm
#define set_file_slot                  DO_NOT_USE_set_file_slot
#define set_flag_slot                  DO_NOT_USE_set_flag_slot
#define set_name_virtual_host          DO_NOT_USE_set_name_virtual_host
#define set_string_slot                DO_NOT_USE_set_string_slot
#define set_string_slot_lower          DO_NOT_USE_set_string_slot_lower
#define set_sub_req_protocol           DO_NOT_USE_set_sub_req_protocol
#define setup_prelinked_modules        DO_NOT_USE_setup_prelinked_modules
#define show_directives                DO_NOT_USE_show_directives
#define show_modules                   DO_NOT_USE_show_modules
#define standalone                     DO_NOT_USE_standalone
#define start_restart                  DO_NOT_USE_start_restart
#define start_shutdown                 DO_NOT_USE_start_shutdown
#define suexec_enabled                 DO_NOT_USE_suexec_enabled
#define table_do                       DO_NOT_USE_table_do
#define threads_per_child              DO_NOT_USE_threads_per_child
#define time_process_request           DO_NOT_USE_time_process_request
#define translate_name                 DO_NOT_USE_translate_name
#define unregister_other_child         DO_NOT_USE_unregister_other_child
#define update_child_status            DO_NOT_USE_update_child_status
#define update_vhost_from_headers      DO_NOT_USE_update_vhost_from_headers
#define update_vhost_given_ip          DO_NOT_USE_update_vhost_given_ip
#define user_id                        DO_NOT_USE_user_id
#define user_name                      DO_NOT_USE_user_name
#define util_init                      DO_NOT_USE_util_init
#define util_uri_init                  DO_NOT_USE_util_uri_init

#else /* APAPI_STRICT */

#define add_per_dir_conf               apx_add_per_dir_conf
#define add_per_url_conf               apx_add_per_url_conf
#define bind_address                   apx_bind_address
#define bprintf                        apx_bprintf
#define bvputs                         apx_bvputs
#define check_access                   apx_check_access
#define check_alarm                    apx_check_alarm
#define check_auth                     apx_check_auth
#define check_user_id                  apx_check_user_id
#define child_exit_modules             apx_child_exit_modules
#define child_init_modules             apx_child_init_modules
#define core_reorder_directories       apx_core_reorder_directories
#define coredump_dir                   apx_coredump_dir
#define create_request_config          apx_create_request_config
#define daemons_limit                  apx_daemons_limit
#define daemons_max_free               apx_daemons_max_free
#define daemons_min_free               apx_daemons_min_free
#define daemons_to_start               apx_daemons_to_start
#define day_snames                     apx_day_snames
#define die                            apx_die
#define dummy_mutex                    apx_dummy_mutex
#define excess_requests_per_child      apx_excess_requests_per_child
#define finalize_request_protocol      apx_finalize_request_protocol
#define finalize_sub_req_protocol      apx_finalize_sub_req_protocol
#define find_command                   apx_find_command
#define find_command_in_modules        apx_find_command_in_modules
#define find_types                     apx_find_types
#define fini_vhost_config              apx_fini_vhost_config
#define fnmatch                        apx_fnmatch
#define force_library_loading          apx_force_library_loading
#define get_local_host                 apx_get_local_host
#define get_virthost_addr              apx_get_virthost_addr
#define group_id                       apx_group_id
#define handle_command                 apx_handle_command
#define header_parse                   apx_header_parse
#define init_alloc                     apx_init_alloc
#define init_modules                   apx_init_modules
#define init_vhost_config              apx_init_vhost_config
#define init_virtual_host              apx_init_virtual_host
#define invoke_handler                 apx_invoke_handler
#define is_fnmatch                     apx_is_fnmatch
#define keepalive_timeout              apx_keepalive_timeout
#define limit_section                  apx_limit_section
#define listenbacklog                  apx_listenbacklog
#define listeners                      apx_listeners
#define lock_fname                     apx_lock_fname
#define log_pid                        apx_log_pid
#define log_transaction                apx_log_transaction
#define max_requests_per_child         apx_max_requests_per_child
#define merge_per_dir_configs          apx_merge_per_dir_configs
#define month_snames                   apx_month_snames
#define null_cleanup                   apx_null_cleanup
#define open_logs                      apx_open_logs
#define os_is_path_absolute            apx_os_is_path_absolute
#define parse_htaccess                 apx_parse_htaccess
#define parse_uri                      apx_parse_uri
#define parse_vhost_addrs              apx_parse_vhost_addrs
#define pid_fname                      apx_pid_fname
#define process_request                apx_process_request
#define process_resource_config        apx_process_resource_config
#define proxy_add_header               apx_proxy_add_header
#define proxy_c2hex                    apx_proxy_c2hex
#define proxy_cache_check              apx_proxy_cache_check
#define proxy_cache_error              apx_proxy_cache_error
#define proxy_cache_tidy               apx_proxy_cache_tidy
#define proxy_cache_update             apx_proxy_cache_update
#define proxy_canon_netloc             apx_proxy_canon_netloc
#define proxy_canonenc                 apx_proxy_canonenc
#define proxy_connect_handler          apx_proxy_connect_handler
#define proxy_date_canon               apx_proxy_date_canon
#define proxy_del_header               apx_proxy_del_header
#define proxy_doconnect                apx_proxy_doconnect
#define proxy_ftp_canon                apx_proxy_ftp_canon
#define proxy_ftp_handler              apx_proxy_ftp_handler
#define proxy_garbage_coll             apx_proxy_garbage_coll
#define proxy_garbage_init             apx_proxy_garbage_init
#define proxy_get_header               apx_proxy_get_header
#define proxy_hash                     apx_proxy_hash
#define proxy_hex2c                    apx_proxy_hex2c
#define proxy_hex2sec                  apx_proxy_hex2sec
#define proxy_host2addr                apx_proxy_host2addr
#define proxy_http_canon               apx_proxy_http_canon
#define proxy_http_handler             apx_proxy_http_handler
#define proxy_is_domainname            apx_proxy_is_domainname
#define proxy_is_hostname              apx_proxy_is_hostname
#define proxy_is_ipaddr                apx_proxy_is_ipaddr
#define proxy_is_word                  apx_proxy_is_word
#define proxy_liststr                  apx_proxy_liststr
#define proxy_log_uerror               apx_proxy_log_uerror
#define proxy_read_headers             apx_proxy_read_headers
#define proxy_sec2hex                  apx_proxy_sec2hex
#define proxy_send_fb                  apx_proxy_send_fb
#define proxy_send_headers             apx_proxy_send_headers
#define proxyerror                     apx_proxyerror
#define psprintf                       apx_psprintf
#define pstrcat                        apx_pstrcat
#define read_config                    apx_read_config
#define read_request                   apx_read_request
#define register_other_child           apx_register_other_child
#define response_code_string           apx_response_code_string
#define restart_time                   apx_restart_time
#define rfc1413                        apx_rfc1413
#define rfc1413_timeout                apx_rfc1413_timeout
#define run_fixups                     apx_run_fixups
#define run_post_read_request          apx_run_post_read_request
#define rvputs                         apx_rvputs
#define scoreboard_fname               apx_scoreboard_fname
#define scoreboard_image               apx_scoreboard_image
#define send_error_response            apx_send_error_response
#define send_header_field              apx_send_header_field
#define send_http_options              apx_send_http_options
#define send_http_trace                apx_send_http_trace
#define server_argv0                   apx_server_argv0
#define server_confname                apx_server_confname
#define server_post_read_config        apx_server_post_read_config
#define server_pre_read_config         apx_server_pre_read_config
#define server_root                    apx_server_root
#define set_callback_and_alarm         apx_set_callback_and_alarm
#define set_file_slot                  apx_set_file_slot
#define set_flag_slot                  apx_set_flag_slot
#define set_name_virtual_host          apx_set_name_virtual_host
#define set_string_slot                apx_set_string_slot
#define set_string_slot_lower          apx_set_string_slot_lower
#define set_sub_req_protocol           apx_set_sub_req_protocol
#define setup_prelinked_modules        apx_setup_prelinked_modules
#define show_directives                apx_show_directives
#define show_modules                   apx_show_modules
#define standalone                     apx_standalone
#define start_restart                  apx_start_restart
#define start_shutdown                 apx_start_shutdown
#define suexec_enabled                 apx_suexec_enabled
#define table_do                       apx_table_do
#define threads_per_child              apx_threads_per_child
#define time_process_request           apx_time_process_request
#define translate_name                 apx_translate_name
#define unregister_other_child         apx_unregister_other_child
#define update_child_status            apx_update_child_status
#define update_vhost_from_headers      apx_update_vhost_from_headers
#define update_vhost_given_ip          apx_update_vhost_given_ip
#define user_id                        apx_user_id
#define user_name                      apx_user_name
#define util_init                      apx_util_init
#define util_uri_init                  apx_util_uri_init

#endif /* APAPI_STRICT */

#endif /* APAPI_COMPAT_H */
