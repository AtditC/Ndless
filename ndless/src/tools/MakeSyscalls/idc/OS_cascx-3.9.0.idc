#define UNLOADED_FILE   1
#include <idc.idc>
static main(void)
{
	MakeRptCmt	(0x10000344,	"init BSS");
	MakeName	(0x1000552c,	"j_TMT_Retreive_Clock");
	MakeName	(0x10005b58,	"cursor_hide");
	MakeName	(0x10005b84,	"cursor_show");
	MakeName	(0x10005bbc,	"j_get_battery_door_detection_mode_0");
	MakeName	(0x10005bd0,	"j_get_battery_door_detection_mode");
	MakeName	(0x10005c8c,	"gui_gc_getGC");
//	MakeName	(0XFFFFFFFF,	"get_documents_dir");:0xfffffff:0x100002e8
	MakeName	(0x100074ec,	"Exitptt");
	MakeName	(0x100099a4,	"file_exists");
//	MakeName	(0XFFFFFFFF,	"ndless_ploader_hook");:0xfffffff:0x100082e8
	MakeName	(0x1000b3c4,	"_gui_gc_getFont");
	MakeName	(0x1000b498,	"_gui_gc_blit_buffer");
	MakeName	(0x1000b63c,	"_gui_gc_getIconSize");
	MakeName	(0x1000b688,	"j__gui_gc_getIconSize");
	MakeName	(0x1000b700,	"_gui_gc_setColorRGB");
//	MakeName	(0XFFFFFFFF,	"gui_gc_new");:0xfffffff:0x100002e8
	MakeName	(0x1000befc,	"_gui_gc_setFont");
	MakeName	(0x1000bf3c,	"_gui_gc_getCharHeight");
	MakeName	(0x1000bf50,	"j__gui_gc_stupid_GIMME_INPUT_FONT");
	MakeName	(0x1000bf54,	"_gui_gc_copy");
	MakeName	(0x1000bf88,	"_gui_gc_blit_gc");
	MakeName	(0x1000c410,	"_gui_gc_getCharWidth");
	MakeName	(0x1000c4bc,	"_gui_gc_getStringWidth");
	MakeName	(0x1000c9e8,	"_gui_gc_drawString");
	MakeName	(0x1000cc94,	"_gui_gc_drawImage");
	MakeName	(0x1000cd54,	"_gui_gc_drawIcon");
	MakeName	(0x1000cdec,	"j__gui_gc_drawIcon");
	MakeName	(0x1000cdf0,	"_gui_gc_fillPoly");
	MakeName	(0x1000d044,	"_gui_gc_drawPoly");
	MakeName	(0x1000d190,	"_gui_gc_setAlpha");
	MakeName	(0x1000d1b8,	"_gui_gc_fillRect");
	MakeName	(0x1000d1e0,	"_gui_gc_fillArc");
	MakeName	(0x1000d284,	"_gui_gc_drawArc");
	MakeName	(0x1000d320,	"_gui_gc_drawLine");
	MakeName	(0x1000d348,	"_gui_gc_fillGradient");
	MakeName	(0x1000d864,	"_gui_gc_clipRect");
	MakeName	(0x1000d928,	"_gui_gc_setRegion");
	MakeName	(0x1000d9b4,	"_gui_gc_finish");
	MakeName	(0x1000da30,	"_gui_gc_begin");
	MakeName	(0x1000db8c,	"_gui_gc_free");
	MakeName	(0x1000dba8,	"_gui_gc_new");
	MakeName	(0x100122e0,	"ndless_inst_resident_hook");
	MakeName	(0x10012394,	"ndless_end_of_init");
	MakeRptCmt	(0x1001239c,	"never returns");
//	MakeName	(0XFFFFFFFF,	"j_j_free_7");:0xfffffff:0x1057d804
	MakeName	(0x10015354,	"j_unlink");
	MakeName	(0x1001ae34,	"j_j_free_0");
	MakeName	(0x1001ae38,	"j_j_free_1");
//	MakeName	(0XFFFFFFFF,	"nn_start_services");:0xfffffff:0x100011bc
	MakeName	(0x1021d0a4,	"screenCallback");
//	MakeName	(0XFFFFFFFF,	"nn_ext_echo_callback");:0xfffffff:0xfffffff
//	MakeRptCmt	(0XFFFFFFFF,	"17000");:0xfffffff:0xfffffff
	MakeName	(0x1001f968,	"TI_Echo_UDP_Init");
	MakeName	(0x1001fad8,	"translateKey");
	MakeName	(0x10022480,	"_show_msgbox_3b");
	MakeName	(0x10022cd8,	"_show_msgbox_2b");
	MakeName	(0x100233ec,	"show_dialog_box2_");
//	MakeName	(0XFFFFFFFF,	"j_j_msc2_free_0");:0xfffffff:0xfffffff
	MakeName	(0x1002cb1c,	"gui_gc_begin");
	MakeName	(0x1002cb54,	"gui_gc_finish");
//	MakeName	(0XFFFFFFFF,	"gui_gc_drawImage");:0xfffffff:0x1002cd7c
	MakeName	(0x1002cf28,	"gui_gc_blit_buffer");
	MakeName	(0x1002d030,	"gui_gc_blit_gc");
//	MakeName	(0XFFFFFFFF,	"gui_gc_getIconSize");:0xfffffff:0x1002cd7c
	MakeName	(0x1002d308,	"gui_gc_getFontHeight");
//	MakeName	(0XFFFFFFFF,	"gui_gc_getCharHeight");:0xfffffff:0x1002d2b4
	MakeName	(0x1002d42c,	"gui_gc_getStringSmallHeight");
//	MakeName	(0XFFFFFFFF,	"gui_gc_getCharWidth");:0xfffffff:0x1002d258
	MakeName	(0x1002d8ec,	"gui_gc_getStringWidth");
	MakeName	(0x1002d35c,	"gui_gc_getStringHeight");
	MakeName	(0x1002d80c,	"gui_gc_fillPoly");
	MakeName	(0x1002d56c,	"gui_gc_getFont");
	MakeName	(0x1002d5b8,	"gui_gc_setFont");
	MakeName	(0x1002dc70,	"gui_gc_drawString");
	MakeName	(0x1002dbf4,	"gui_gc_drawSprite");
//	MakeName	(0XFFFFFFFF,	"gui_gc_drawIcon");:0xfffffff:0x1002cd7c
//	MakeName	(0XFFFFFFFF,	"gui_gc_drawPoly");:0xfffffff:0x1002d258
	MakeName	(0x1002d864,	"gui_gc_fillGradient");
//	MakeName	(0XFFFFFFFF,	"gui_gc_fillRect");:0xfffffff:0x1002cd7c
//	MakeName	(0XFFFFFFFF,	"gui_gc_drawRect");:0xfffffff:0x1002cd7c
	MakeName	(0x1002da88,	"gui_gc_setPen");
	MakeName	(0x1002db2c,	"gui_gc_setAlpha");
//	MakeName	(0XFFFFFFFF,	"gui_gc_fillArc");:0xfffffff:0x1002d710
//	MakeName	(0XFFFFFFFF,	"gui_gc_drawArc");:0xfffffff:0x1002d710
	MakeName	(0x1002d794,	"gui_gc_drawLine");
	MakeName	(0x1002dcdc,	"gui_gc_clipRect");
	MakeName	(0x1002dec8,	"gui_gc_free");
	MakeName	(0x1002def4,	"gui_gc_setColorRGB");
	MakeName	(0x1002df8c,	"gui_gc_setColor");
	MakeName	(0x1002dfa4,	"gui_gc_setRegion");
	MakeName	(0x1002e0cc,	"gui_gc_copy");
	MakeName	(0x10036104,	"j_j_free_2");
//	MakeRptCmt	(0XFFFFFFFF,	"ressources_syst");:0xfffffff:0x1000f098
	MakeName	(0x1003a998,	"compress_encrypt_tns");
	MakeName	(0x1003c9b4,	"__OS_registerProgramEditor");
	MakeName	(0x1004fac0,	"inflateInit");
	MakeName	(0x10055508,	"j_j_free_3");
	MakeName	(0x10055b1c,	"j_j_free_4");
	MakeName	(0x10058aa8,	"_gui_gc_stupid_GIMME_INPUT_FONT");
	MakeName	(0x1006af5c,	"send_key_event");
	MakeRptCmt	(0x1006af80,	"type");
	MakeRptCmt	(0x1006afe4,	"ascii");
	MakeRptCmt	(0x1006afe8,	"key");
	MakeName	(0x1006b580,	"send_click_event");
	MakeName	(0x1006b640,	"send_pad_event");
	MakeName	(0x1007704c,	"j_j_free_5");
	MakeName	(0x10078818,	"j_j_free_6");
	MakeName	(0x1007c0d4,	"j_j_free_8");
	MakeName	(0x1007c3bc,	"calc_cmd");
	MakeName	(0x1008143c,	"flash_debug_print");
	MakeName	(0x100837ec,	"flash_ECC_word_to_bytes");
	MakeName	(0x10083810,	"flash_query_status");
	MakeName	(0x1008382c,	"flash_reset");
	MakeName	(0x10083868,	"flash_query_chip_type");
	MakeName	(0x10083c7c,	"flash_write_with_ECC");
	MakeName	(0x10083ec8,	"check_for_nand");
	MakeName	(0x10084ad0,	"read_nand");
	MakeName	(0x10084e0c,	"write_nand");
	MakeName	(0x10085044,	"flash_get_block_data_size");
	MakeName	(0x10085070,	"nand_erase_range");
//	MakeName	(0XFFFFFFFF,	"TI_NN_GetLocalNode");:0xfffffff:0x10005870
	MakeName	(0x10088378,	"TI_NN_IsNodeResponsive");
//	MakeName	(0XFFFFFFFF,	"TI_NN_GetRemoteServiceId");:0xfffffff:0x1000218c
//	MakeName	(0XFFFFFFFF,	"TI_NN_GetNodeHandle");:0xfffffff:0x1021dc90
//	MakeName	(0XFFFFFFFF,	"TI_NN_GetSessionHandle");:0xfffffff:0x100005e8
//	MakeName	(0XFFFFFFFF,	"TI_NN_AddServiceToList");:0xfffffff:0x10003948
//	MakeName	(0XFFFFFFFF,	"TI_NN_NodeEnumDone");:0xfffffff:0x1087555c
//	MakeName	(0XFFFFFFFF,	"TI_NN_NodeEnumNext");:0xfffffff:0x10003794
//	MakeName	(0XFFFFFFFF,	"TI_NN_GetNodeMaxPktSize");:0xfffffff:0x100666d4
//	MakeName	(0XFFFFFFFF,	"TI_NN_GetConnMaxPktSize");:0xfffffff:0x1048eee0
//	MakeName	(0XFFFFFFFF,	"j_TI_NN_GetConnMaxPktSize");:0xfffffff:0x10000308
//	MakeName	(0XFFFFFFFF,	"TI_NN_FreeServiceStuct");:0xfffffff:0x10000310
//	MakeName	(0XFFFFFFFF,	"TI_NN_LoadConnectors");:0xfffffff:0x1000454c
//	MakeName	(0XFFFFFFFF,	"TI_NN_LoadNavstack");:0xfffffff:0x10000310
//	MakeName	(0XFFFFFFFF,	"TI_NN_InitializeGlobals");:0xfffffff:0x10003948
//	MakeName	(0XFFFFFFFF,	"TI_NN_ConstructPacket");:0xfffffff:0xfffffff
//	MakeName	(0XFFFFFFFF,	"TI_NN_Write");:0xfffffff:0x10001b28
//	MakeName	(0XFFFFFFFF,	"TI_NN_Read");:0xfffffff:0x10001b28
//	MakeName	(0XFFFFFFFF,	"TI_NN_NodeEnumInitProcResponse");:0xfffffff:0x102b8bb8
//	MakeRptCmt	(0XFFFFFFFF,	"15000");:0xfffffff:0x100aecd0
//	MakeName	(0XFFFFFFFF,	"TI_NN_StartService");:0xfffffff:0x100031a0
//	MakeName	(0XFFFFFFFF,	"TI_NN_InvalidateConnectionHandle");:0xfffffff:0xfffffff
//	MakeName	(0XFFFFFFFF,	"TI_NN_StopService");:0xfffffff:0x100011bc
//	MakeName	(0XFFFFFFFF,	"TI_NN_DisconnectWithNoEclose");:0xfffffff:0x10001b28
//	MakeName	(0XFFFFFFFF,	"TI_NN_ProcessEclosePacket");:0xfffffff:0x10001b28
//	MakeName	(0XFFFFFFFF,	"TI_NN_IsPacketValid");:0xfffffff:0x10000310
//	MakeName	(0XFFFFFFFF,	"TI_NN_Connect2");:0xfffffff:0x10003794
//	MakeName	(0XFFFFFFFF,	"TI_NN_Connect");:0xfffffff:0x100011bc
//	MakeName	(0XFFFFFFFF,	"TI_NN_ConstructControlPacket");:0xfffffff:0xfffffff
//	MakeName	(0XFFFFFFFF,	"TI_NN_SendDisconnectPacket");:0xfffffff:0x100031a0
//	MakeName	(0XFFFFFFFF,	"TI_NN_SrvConnDisconnect");:0xfffffff:0x10001b28
//	MakeName	(0XFFFFFFFF,	"TI_NN_Activate_Callback");:0xfffffff:0x100031a0
//	MakeName	(0XFFFFFFFF,	"TI_NN_Disconnect");:0xfffffff:0x10001b28
//	MakeName	(0XFFFFFFFF,	"TI_NN_NodeEnumInit");:0xfffffff:0x1000454c
//	MakeName	(0XFFFFFFFF,	"TI_NN_Shutdown");:0xfffffff:0x10001b28
//	MakeName	(0XFFFFFFFF,	"TI_NN_Init");:0xfffffff:0xfffffff
//	MakeName	(0XFFFFFFFF,	"TI_NN_CheckNewConnection");:0xfffffff:0x10001b28
//	MakeName	(0XFFFFFFFF,	"TI_NN_ProcessPacket");:0xfffffff:0x10001b28
//	MakeName	(0XFFFFFFFF,	"TI_NN_readCallback");:0xfffffff:0x100011bc
//	MakeName	(0XFFFFFFFF,	"TI_NN_InvalidateConnections");:0xfffffff:0x10000310
//	MakeName	(0XFFFFFFFF,	"TI_NN_UnregisterNotifyCallback");:0xfffffff:0x1000454c
//	MakeName	(0XFFFFFFFF,	"TI_NN_NotifyCallback");:0xfffffff:0x100011bc
//	MakeName	(0XFFFFFFFF,	"TI_NN_RegisterNotifyCallback");:0xfffffff:0xfffffff
//	MakeName	(0XFFFFFFFF,	"TI_NN_FreeConnectionHandle");:0xfffffff:0x1000454c
//	MakeName	(0XFFFFFFFF,	"TI_NN_DeleteNode");:0xfffffff:0x10003948
//	MakeName	(0XFFFFFFFF,	"TI_NN_AddNode");:0xfffffff:0x100bbc14
	MakeName	(0x10086e34,	"TI_NN_InstallOSServiceStart");
//	MakeName	(0XFFFFFFFF,	"performRqstToSendOS");:0xfffffff:0x100011bc
	MakeName	(0x100873a8,	"install_os_check_file");
	MakeName	(0x10087a24,	"nn_perform_install_os");
//	MakeName	(0XFFFFFFFF,	"TI_NN_InstallOS");:0xfffffff:0x10003794
//	MakeName	(0XFFFFFFFF,	"MessageServiceRegister");:0xfffffff:0x1056acb8
	MakeName	(0x100892a8,	"start_msg_service");
//	MakeName	(0XFFFFFFFF,	"TI_NN_GetNodeInfo");:0xfffffff:0x10003794
	MakeName	(0x1008b0f0,	"TI_NN_GetOperationContext");
	MakeName	(0x1008b13c,	"TI_NN_ContinueOperation");
	MakeName	(0x1008b1d4,	"TI_NN_GetOperationResult");
	MakeName	(0x1008b220,	"TI_NN_SetOperationResult");
	MakeName	(0x1008b320,	"TI_NN_SetOperationProgress");
	MakeName	(0x1008b45c,	"TI_NN_CancelOperation");
	MakeName	(0x1008b564,	"TI_NN_SetOperationContext");
	MakeName	(0x1008b670,	"TI_NN_DestroyOperationHandle");
	MakeName	(0x1008b744,	"TI_NN_CreateOperationHandle");
	MakeName	(0x1008c140,	"screen_get_error_code");
//	MakeName	(0XFFFFFFFF,	"screen_write_status_packet");:0xfffffff:0x10003ea0
//	MakeName	(0XFFFFFFFF,	"writeScreenRequestPacket");:0xfffffff:0x1032bea8
//	MakeName	(0XFFFFFFFF,	"write_screen_data");:0xfffffff:0x10001b28
//	MakeName	(0XFFFFFFFF,	"nn_handle_screen_operation_cb");:0xfffffff:0x10001b28
//	MakeRptCmt	(0XFFFFFFFF,	"30000");:0xfffffff:0x1005e284
//	MakeName	(0XFFFFFFFF,	"TI_NN_GetNodeScreen");:0xfffffff:0x10369600
//	MakeName	(0XFFFFFFFF,	"TI_HAL_getStatinfo");:0xfffffff:0xfffffff
//	MakeName	(0XFFFFFFFF,	"start_sync_service");:0xfffffff:0xfffffff
//	MakeName	(0XFFFFFFFF,	"TI_NN_CopyFile");:0xfffffff:0xfffffff
//	MakeName	(0XFFFFFFFF,	"TI_NN_Rename");:0xfffffff:0xfffffff
//	MakeName	(0XFFFFFFFF,	"TI_NN_RmDir");:0xfffffff:0x10147a78
//	MakeName	(0XFFFFFFFF,	"TI_NN_MkDir");:0xfffffff:0x10147a78
//	MakeName	(0XFFFFFFFF,	"TI_NN_DeleteFile");:0xfffffff:0x10147a78
//	MakeName	(0XFFFFFFFF,	"TI_NN_GetFileAttributes");:0xfffffff:0x10003794
//	MakeName	(0XFFFFFFFF,	"TI_NN_PutFile");:0xfffffff:0x10001b28
//	MakeName	(0XFFFFFFFF,	"TI_NN_DirEnumDone");:0xfffffff:0xfffffff
//	MakeName	(0XFFFFFFFF,	"TI_NN_DirEnumNext");:0xfffffff:0xfffffff
//	MakeName	(0XFFFFFFFF,	"TI_NN_DirEnumInit");:0xfffffff:0x100031a0
//	MakeName	(0XFFFFFFFF,	"TI_NN_GetFile");:0xfffffff:0x105ea72c
	MakeName	(0x1009d12c,	"find_connection");
	MakeName	(0x100a1634,	"TI_NS_WritePacketToRemoteStream");
	MakeRptCmt	(0x100a16b0,	"cn_write?");
	MakeName	(0x100a1940,	"append_pkt_to_hold_q");
	MakeName	(0x100a1a34,	"send_remote_packet");
	MakeName	(0x100a1d44,	"q_pkt_n_wait_for_ack");
	MakeName	(0x100a2c48,	"process_received_pckt");
	MakeName	(0x100a4d90,	"create_pkt_list");
	MakeName	(0x100a4fec,	"TI_NS_Write");
	MakeName	(0x100bd76c,	"j_printf");
	MakeName	(0x100c0a18,	"get_battery_door_detection_mode");
	MakeName	(0x100c1480,	"set_task_name");
	MakeName	(0x100c5568,	"publish_send_immediate");
	MakeName	(0x100cba54,	"disp_str");
	MakeName	(0x100d0d60,	"ti_pm_register_dma");
	MakeName	(0x100d1438,	"reboot");
	MakeName	(0x100eac04,	"j_string_free_1");
	MakeName	(0x100eac08,	"j_string_new_0");
	MakeName	(0x100eac80,	"j_string_concat_utf16_0");
	MakeName	(0x100ead08,	"j_string_set_utf16_0");
	MakeName	(0x100f0ca0,	"j_msc2_free_0");
//	MakeName	(0XFFFFFFFF,	"j_j_free_9");:0xfffffff:0x100e5c5c
//	MakeName	(0XFFFFFFFF,	"get_res_string");:0xfffffff:0x100f3934
	MakeName	(0x10111060,	"get_res_string_sys");
	MakeName	(0x10110cc8,	"read_unaligned");
	MakeName	(0x1012b224,	"lua_string_usub");
	MakeName	(0x1012bef8,	"luaL_openlibs");
	MakeName	(0x10133e48,	"lua_d2editor_newRichText");
	MakeName	(0x10135168,	"lua_clipboard_getText");
	MakeName	(0x1013853c,	"lua_platform_isDeviceModeRendering");
	MakeName	(0x1013855c,	"lua_platform_gc");
	MakeName	(0x1013ced4,	"log_rs232");
	MakeName	(0x1013d380,	"j_log_rs232");
	MakeName	(0x1017ac14,	"j_j_free_11");
	MakeName	(0x101a5d98,	"j_j_free_24");
	MakeName	(0x101a7760,	"j_j_free_10");
	MakeName	(0x101a7988,	"j_j_free_16");
	MakeName	(0x101b3e58,	"j_j_free_12");
//	MakeName	(0XFFFFFFFF,	"j_show_dialog_box?");:0x10000000:0x10000001
	MakeName	(0x101f8288,	"j_crypt_decrypt_tns_D_block");
	MakeName	(0x101f8328,	"des_start_decrypt");
	MakeName	(0x101f8660,	"crypt_decrypt_tns_D_block");
	MakeName	(0x101f8d38,	"des_get_keys");
	MakeName	(0x101f8e94,	"DES_ecb3_encrypt");
	MakeName	(0x101f90dc,	"des_set_key_unchecked");
	MakeName	(0x101f9540,	"get_des_key");
	MakeName	(0x101f966c,	"do_engine_init");
	MakeName	(0x101fe6d4,	"DES_encrypt2");
	MakeName	(0x101ffb64,	"DES_encrypt3");
	MakeName	(0x101ffc88,	"DES_decrypt3");
	MakeName	(0x10200b3c,	"engine_unlocked_finish");
	MakeName	(0x10200b8c,	"ENGINE_finish");
	MakeName	(0x10200c00,	"engine_unlocked_init");
	MakeName	(0x10200ccc,	"ENGINE_init");
	MakeName	(0x10201ce0,	"CRYPTO_w_lock_unlock");
	MakeName	(0x10205344,	"engine_table_select");
	MakeName	(0x1021c05c,	"touchpad_write");
	MakeName	(0x1021c3a8,	"touchpad_read");
	MakeName	(0x1027fa78,	"j_j_free_13");
//	MakeName	(0XFFFFFFFF,	"get_event");:0xfffffff:0x10078d6c
//	MakeRptCmt	(0XFFFFFFFF,	"pending event flag");:0xfffffff:0x100543f0
//	MakeRptCmt	(0XFFFFFFFF,	"fill up the event struct");:0xfffffff:0x10282d90
	MakeRptCmt	(0x103fadd8,	"pending event flag");
	MakeName	(0x1028d0ac,	"j_get_documents_dir");
	MakeName	(0x1028e0fc,	"string_len");
	MakeName	(0x1028e104,	"string_charAt");
	MakeName	(0x1028e150,	"string_truncate");
	MakeName	(0x1028e178,	"string_erase");
	MakeName	(0x1028e548,	"string_lower");
	MakeName	(0x1028e588,	"string_free");
	MakeName	(0x1028e5dc,	"string_new");
	MakeName	(0x1028e668,	"string_realloc_str");
	MakeName	(0x1028e774,	"string_to_ascii");
	MakeName	(0x1028e974,	"string_insert_utf16");
	MakeName	(0x1028eaec,	"string_insert_replace_utf16");
	MakeName	(0x1028eb74,	"string_substring");
	MakeName	(0x1028ec04,	"string_set_utf16");
	MakeName	(0x1028ec7c,	"string_set_ascii_0");
	MakeName	(0x1028edc8,	"string_set_ascii");
	MakeName	(0x1028eed8,	"string_concat_utf16");
	MakeName	(0x1028ef4c,	"string_compareTo_utf16");
	MakeName	(0x1028ef68,	"string_indexOf_utf16");
	MakeName	(0x1028efc0,	"string_substring_utf16");
	MakeName	(0x1028f104,	"string_last_indexOf_utf16");
	MakeName	(0x1028f160,	"string_formatNumber");
	MakeName	(0x1028f49c,	"string_sprintf_utf16");
	MakeName	(0x1028f4f8,	"string_formatInteger");
	MakeName	(0x102b1bb4,	"j_memcpy_0");
	MakeName	(0x102b1bb8,	"j_memset_0");
	MakeName	(0x102b1bbc,	"j_free");
	MakeName	(0x102b1d80,	"unknown_TI_AllocateBlock_");
	MakeName	(0x102b1d84,	"j_memcpy");
	MakeName	(0x102b1d88,	"j_memset");
	MakeName	(0x102b202c,	"utf162ascii");
	MakeName	(0x102b4bc0,	"ascii2utf16");
//	MakeName	(0XFFFFFFFF,	"j_j_free_14");:0xfffffff:0xfffffff
	MakeName	(0x102be350,	"refresh_homescr");
	MakeName	(0x102bef80,	"refresh_docbrowser");
	MakeName	(0x102d5900,	"Expat_XML_Parse");
	MakeName	(0x102ed664,	"unknown_TI_ZIPArchive_UnallocateBuffers");
	MakeName	(0x102ed6a8,	"unknown_TI_ZIPArchive_Close");
	MakeName	(0x102ed7d8,	"unknown_TI_ZIPArchive_Uncompress_");
	MakeName	(0x102ed8f4,	"unknown_TI_ZIPArchive_Open");
	MakeName	(0x102ef7fc,	"tixc0100_compress");
	MakeName	(0x102f0b00,	"tixc0100_uncompress");
	MakeName	(0x102f1a68,	"read_unaligned_word");
	MakeName	(0x102f1a80,	"read_unaligned_longword");
	MakeName	(0x102f1bd8,	"write_unaligned_word");
	MakeName	(0x102f1be8,	"write_unaligned_longword");
	MakeName	(0x102f3578,	"crc32");
	MakeName	(0x102f362c,	"crc32_combine");
	MakeName	(0x102f381c,	"deflateEnd");
	MakeName	(0x102f47e4,	"deflate");
	MakeName	(0x102f611c,	"deflateInit2_");
	MakeName	(0x102f63b8,	"deflateInit");
	MakeName	(0x102f64c0,	"inflateInit2_");
	MakeName	(0x102f65f8,	"inflateEnd");
	MakeName	(0x102f6c2c,	"inflate");
//	MakeName	(0XFFFFFFFF,	"zlibVersion");:0xfffffff:0x100002e8
	MakeName	(0x102fd3fc,	"zlibCompileFlags");
	MakeName	(0x102fd428,	"adler32");
	MakeName	(0x102fd8c0,	"compress2");
	MakeName	(0x102fe334,	"CSC_Place_On_List");
	MakeName	(0x102fe364,	"CSC_Priority_Place_On_List");
	MakeName	(0x102fe3dc,	"CSC_Remove_From_List");
	MakeName	(0x102fe604,	"ERC_System_Error");
	MakeName	(0x10300f60,	"QUC_Receive_From_Queue");
	MakeName	(0x10301630,	"QUC_Send_To_Queue");
	MakeName	(0x103035e4,	"TMS_Delete_Timer");
	MakeName	(0x10303658,	"TMS_Create_Timer");
	MakeName	(0x103039d0,	"DMC_Cleanup");
	MakeName	(0x10303a00,	"net_free");
	MakeName	(0x10303da8,	"DMC_Create_Memory_Pool");
	MakeName	(0x10303ef4,	"DMC_Allocate_Memory");
	MakeName	(0x10304104,	"DMC_Deallocate_Memory_0");
	MakeName	(0x103226b0,	"isspace");
	MakeRptCmt	(0x1035b450,	"fill up the event struct");
	MakeName	(0x103622d8,	"cursor_hide2");
	MakeName	(0x10365e74,	"nn_pkt_malloc");
//	MakeName	(0XFFFFFFFF,	"TCC_Current_Task_Pointer");:0xfffffff:0x1037b944
	MakeName	(0x1037baac,	"TCC_Dispatch_LISR");
	MakeName	(0x1037bdc8,	"TCC_Suspend_Task");
	MakeName	(0x1037c0d0,	"TCC_Resume_Task");
	MakeName	(0x1037c3d8,	"TCC_Terminate_Task");
	MakeName	(0x1037c53c,	"TCC_Reset_Task");
	MakeName	(0x1037c744,	"TCC_Create_Task");
	MakeName	(0x1037ccc0,	"INT_Vectors");
	MakeName	(0x1037cd7c,	"INT_Vectors_Loaded");
	MakeName	(0x1037cd88,	"INT_Setup_Vectors");
	MakeName	(0x1037cda0,	"int_irq_enable");
	MakeName	(0x1037cdc8,	"int_irq_disable");
	MakeName	(0x1037cdf0,	"INT_Retreive_Shell");
	MakeName	(0x1037ce00,	"INT_Reset_Addr");
	MakeName	(0x1037ce3c,	"INT_Undef_Addr");
	MakeName	(0x1037ce78,	"INT_Software_Addr");
	MakeName	(0x1037ceb4,	"Int_Prefetch_Addr");
	MakeName	(0x1037cf8c,	"Int_Reserved");
	MakeName	(0x1037d110,	"INT_C_Memory_Initialize");
	MakeName	(0x1037d14c,	"INT_Clear_BSS");
	MakeName	(0x1037d2e8,	"io_init_table");
	MakeName	(0x1037d734,	"INT_Target_Initialize");
	MakeName	(0x1037d750,	"Int_IRQ");
	MakeName	(0x1037d7c0,	"Int_FIQ");
	MakeName	(0x1037dbe8,	"TCT_Local_Control_Interrupts");
	MakeName	(0x1037dc0c,	"TCT_Restore_Interrupts");
	MakeName	(0x1037dc30,	"TCT_Build_Task_Stack");
	MakeName	(0x1037dd58,	"TCT_Build_Signal_Frame");
	MakeName	(0x1037ddc8,	"TCT_Check_Stack");
	MakeName	(0x1037de24,	"TCT_Schedule");
	MakeName	(0x1037df2c,	"TCT_Control_To_System");
	MakeName	(0x1037e194,	"TCT_Protect_Switch");
	MakeName	(0x1037e1dc,	"TCT_Schedule_Protected");
	MakeName	(0x1037e548,	"TMT_Retreive_Clock");
	MakeName	(0x1037e554,	"TMT_Read_Timer");
	MakeName	(0x1037e560,	"TMT_Enable_Timer");
	MakeName	(0x1037e578,	"TMT_Adjust_Timer");
	MakeName	(0x1037e59c,	"TMT_Disable_Timer");
	MakeName	(0x1037e5ac,	"TMT_Retreive_TS_Task");
	MakeName	(0x1037e5b8,	"TMT_Timer_Interrupt");
	MakeName	(0x1037e738,	"luaopen_image");
	MakeName	(0x1037ed5c,	"get_internal_event");
	MakeRptCmt	(0x1037ed64,	"'KSAT'");
	MakeRptCmt	(0x1037ed78,	" = KSAT?");
	MakeRptCmt	(0x1037edac,	"internal event dest");
	MakeRptCmt	(0x1037edbc,	"get the event");
	MakeRptCmt	(0x1037edf0,	"internal event");
	MakeRptCmt	(0x1037edf4,	"event struct dest");
	MakeName	(0x1037ee1c,	"create_event_queue");
	MakeName	(0x1037f034,	"send_to_event_queue");
	MakeName	(0x1038e414,	"FfxVSprintf");
	MakeName	(0x1039d198,	"tftp_transfer");
	MakeName	(0x103a94cc,	"tftpc_transfer");
	MakeName	(0x103bccb4,	"setup_peap_version");
	MakeName	(0x103c0a9c,	"GenerateAuthenticatorResponse");
	MakeName	(0x103c0e7c,	"setup_eap_mschapv2");
	MakeName	(0x103dd9c8,	"btiosc_handler6");
	MakeName	(0x103dd9d0,	"btiosc_handler3");
	MakeName	(0x103dd9d8,	"btiosc_thread");
	MakeName	(0x103dda40,	"btiosc_handler2");
	MakeName	(0x103ddabc,	"btiosc_handler5");
	MakeName	(0x103ddb98,	"btiosc_handler7");
	MakeName	(0x103ddc9c,	"btiosc_handler4");
	MakeName	(0x103ddd68,	"btiosc_handler1");
	MakeName	(0x103de01c,	"get_usb_info");
	MakeName	(0x103de0c0,	"alloc_jbtio");
	MakeName	(0x103de8b4,	"device_get_ivars");
	MakeName	(0x103de8c4,	"USBDEVNAME");
	MakeName	(0x103de8f4,	"device_get_softc");
	MakeName	(0x103de9dc,	"_usb_mk_device_name");
	MakeName	(0x103dead8,	"usb_register_driver");
	MakeName	(0x103debcc,	"unregister_drivers");
	MakeRptCmt	(0x103debd4,	"chained list of drivers");
	MakeName	(0x103dec18,	"register_drivers");
	MakeRptCmt	(0x103dec20,	"table of drivers");
	MakeName	(0x103dec60,	"_usb_match");
	MakeRptCmt	(0x103deccc,	"call the match method");
	MakeRptCmt	(0x103decd0,	"UMATCH_*");
	MakeRptCmt	(0x103dece4,	"= 0");
	MakeRptCmt	(0x103dece8,	"next in chained list");
	MakeRptCmt	(0x103ded2c,	"call the attach method");
	MakeName	(0x103df2d8,	"usbd_errstr");
	MakeName	(0x103dfd20,	"alloc_tdi_4x_otg");
	MakeName	(0x103e25a8,	"alloc_tdi_4x");
	MakeName	(0x103e34f0,	"dcd_free_pipe");
	MakeName	(0x103e37cc,	"build_single_td");
	MakeRptCmt	(0x103e8b30,	"nSpireDev0");
	MakeName	(0x103e8c8c,	"cn_write");
	MakeName	(0x103e8d34,	"EOREAD4");
	MakeName	(0x103e8d58,	"EOWRITE4");
	MakeName	(0x103e90b4,	"start_usb_stack");
	MakeName	(0x103e91c0,	"bsd_printf");
	MakeName	(0x103e91d8,	"bsd_panic");
	MakeName	(0x103e9714,	"bsd_free2");
	MakeName	(0x103e9718,	"j_msc2_free");
	MakeName	(0x103e971c,	"bsd_malloc");
	MakeName	(0x103e9898,	"snprintf");
//	MakeName	(0XFFFFFFFF,	"j_strcpy");:0xfffffff:0x10007eec
//	MakeName	(0XFFFFFFFF,	"j_strncmp");:0xfffffff:0x10007ef0
//	MakeName	(0XFFFFFFFF,	"j_strcmp");:0xfffffff:0x10007ef4
//	MakeName	(0XFFFFFFFF,	"j_strlen");:0xfffffff:0x10007ef8
//	MakeName	(0XFFFFFFFF,	"j_memset_1");:0xfffffff:0x10007efc
//	MakeName	(0XFFFFFFFF,	"j_memcpy_1");:0xfffffff:0x10007f00
	MakeName	(0x103e9a00,	"_tsleep");
	MakeName	(0x103e9b04,	"usbd_delay_ms");
	MakeName	(0x103fa600,	"errno_addr");
	MakeName	(0x103fba14,	"pthread_create");
	MakeName	(0x103fcccc,	"pthread_join");
	MakeName	(0x103fce58,	"mutex_destroy");
	MakeName	(0x103fdc78,	"is_nonzero");
	MakeName	(0x103fe494,	"isalpha");
	MakeName	(0x103fe4c0,	"isascii");
	MakeName	(0x103fe4d0,	"isdigit");
	MakeName	(0x103fe4e4,	"islower");
	MakeName	(0x103fe510,	"isupper");
	MakeName	(0x103fe524,	"isxdigit");
	MakeName	(0x103fe560,	"tolower");
	MakeName	(0x103fe570,	"toupper");
	MakeName	(0x103fe580,	"calloc");
	MakeName	(0x103fe5bc,	"free");
	MakeName	(0x103fe630,	"malloc");
	MakeName	(0x103fe700,	"realloc");
	MakeName	(0x10400cf0,	"fprintf");
	MakeName	(0x10400d88,	"printf");
	MakeName	(0x10400dc0,	"unknown_vsprintf_");
	MakeName	(0x10400e10,	"sprintf");
	MakeName	(0x10400e44,	"_vfprintf");
	MakeName	(0x10400ec0,	"_vprintf");
	MakeName	(0x10400f44,	"_vsnprintf");
	MakeName	(0x10400f98,	"_vsprintf");
	MakeName	(0x1040191c,	"vsprintf_limit256");
	MakeName	(0x10402710,	"sscanf");
	MakeName	(0x104036ac,	"file_undef1");
	MakeName	(0x1040378c,	"fclose");
	MakeName	(0x104037f8,	"feof");
	MakeName	(0x10403828,	"ferror");
	MakeName	(0x10403858,	"flush_stream_sub");
	MakeName	(0x104038c0,	"fflush");
	MakeName	(0x1040393c,	"fget_sub");
	MakeName	(0x10403b18,	"fgetc");
	MakeName	(0x10403bb8,	"fgets");
	MakeName	(0x10403d5c,	"file_undef2");
	MakeName	(0x10403e04,	"file_undef3");
	MakeName	(0x10403f30,	"freopen");
	MakeName	(0x10403f6c,	"fopen");
	MakeName	(0x10404110,	"fread");
	MakeName	(0x10404304,	"fseek");
	MakeName	(0x10404458,	"ftell");
	MakeName	(0x10404598,	"fwrite");
	MakeName	(0x10404838,	"getc");
	MakeName	(0x104048a0,	"putc");
	MakeName	(0x10404910,	"puts");
	MakeName	(0x10404954,	"remove");
	MakeName	(0x10404b20,	"ungetc");
//	MakeName	(0XFFFFFFFF,	"atoi");:0x10404bb8:0x10404c40
	MakeName	(0x10405000,	"rand");
//	MakeName	(0XFFFFFFFF,	"srand");:0xfffffff:0x1002ac64
	MakeName	(0x104050ac,	"strtod");
	MakeName	(0x10405288,	"strtol_sub");
	MakeName	(0x104053b4,	"strtol");
	MakeName	(0x10405518,	"strtoul");
	MakeName	(0x10405580,	"memchr");
	MakeName	(0x104055fc,	"memcmp");
	MakeName	(0x10405694,	"memcpy");
	MakeName	(0x10405698,	"memmove");
	MakeName	(0x104059cc,	"memset");
	MakeName	(0x10405b30,	"strcat");
	MakeName	(0x10405b64,	"strchr");
	MakeName	(0x10405b88,	"strcmp");
	MakeName	(0x10405bd8,	"strcpy");
	MakeName	(0x10405c74,	"strerror");
	MakeName	(0x10405c9c,	"strlen");
	MakeName	(0x10405cc4,	"strncat");
	MakeName	(0x10405d58,	"strncmp");
	MakeName	(0x10405e0c,	"strncpy");
	MakeName	(0x10405ee4,	"strpbrk");
	MakeName	(0x10405f34,	"strrchr");
	MakeName	(0x10405f5c,	"strstr");
	MakeName	(0x10405fcc,	"strtok");
	MakeName	(0x10406140,	"__OS_formatDate");
	MakeName	(0x104076f4,	"_memcpy");
	MakeName	(0x10407d98,	"memrev");
	MakeName	(0x1040807c,	"atof");
	MakeName	(0x10408724,	"fputc");
	MakeName	(0x104088c8,	"strtoul?");
	MakeName	(0x10409740,	"chdir");
	MakeName	(0x104098a0,	"close");
	MakeName	(0x10409a24,	"closedir");
	MakeName	(0x1040a310,	"getcwd");
	MakeName	(0x1040a690,	"mkdir");
	MakeName	(0x1040a810,	"open");
	MakeName	(0x1040ab4c,	"opendir");
	MakeName	(0x1040b66c,	"slash_to_backslash_in_path");
	MakeName	(0x1040b748,	"posix_file_init");
	MakeName	(0x1040b9e4,	"read");
	MakeName	(0x1040bce0,	"readdir");
	MakeName	(0x1040be00,	"rename");
	MakeName	(0x1040c04c,	"rmdir");
	MakeName	(0x1040c1e4,	"stat");
	MakeName	(0x1040c4c0,	"unlink");
	MakeName	(0x1040c748,	"write");
	MakeName	(0x1040d008,	"lua_cursor_show");
	MakeName	(0x1040d25c,	"j_NU_Open");
	MakeName	(0x1040d744,	"NU_Done");
	MakeName	(0x1040d7b0,	"NU_Get_Next");
	MakeName	(0x1040d810,	"NU_Get_First");
	MakeName	(0x1040db50,	"NU_Current_Dir");
	MakeName	(0x1040dbdc,	"NU_Set_Current_Dir");
	MakeName	(0x1040dcac,	"NU_Flush");
	MakeName	(0x1040dcf0,	"NU_Truncate");
	MakeName	(0x1040dd3c,	"NU_Seek");
	MakeName	(0x1040dd90,	"NU_Write");
	MakeName	(0x1040dde4,	"NU_Read");
	MakeName	(0x1040de80,	"NU_Delete");
	MakeName	(0x1040dec0,	"NU_Close");
	MakeName	(0x1040df18,	"NU_Open");
	MakeName	(0x1040dfa0,	"NU_FreeSpace");
	MakeName	(0x10413fb0,	"FfxDriverDiskCreate");
	MakeName	(0x1042385c,	"FfxDclAssertFired");
	MakeName	(0x1045b0fc,	"luaO_pushvfstring");
	MakeName	(0x1045d96c,	"SHA1_Update");
	MakeName	(0x10478120,	"alloc_ehci_local");
	MakeName	(0x10478318,	"ehci_unknownvendor_attach");
	MakeName	(0x1047850c,	"alloc_ucompdev");
	MakeName	(0x10478898,	"unknown_match2");
	MakeRptCmt	(0x10478e40,	"SUSPEND");
	MakeName	(0x10479274,	"uhub_explore");
	MakeRptCmt	(0x104797e8,	"power");
	MakeName	(0x10479994,	"bus_generic_resume");
	MakeName	(0x104799cc,	"bus_generic_shutdown");
	MakeRptCmt	(0x10479ba8,	"UHF_PORT_RESET");
	MakeName	(0x10479d04,	"bus_generic_suspend");
	MakeRptCmt	(0x10479e24,	"SUSPEND");
	MakeName	(0x10479e58,	"uhub_detach");
	MakeName	(0x10479f70,	"uhub_attach");
	MakeRptCmt	(0x10479fc0,	"%s");
	MakeRptCmt	(0x10479fcc,	"%s\\n");
	MakeName	(0x1047a4f4,	"uhub_match");
	MakeName	(0x1047a79c,	"usb_attach");
	MakeName	(0x1047a988,	"usbd_find_idesc");
	MakeName	(0x1047add8,	"usb_disconnect_port");
	MakeName	(0x1047b180,	"usbd_setup_pipe");
	MakeName	(0x1047b2c4,	"usbd_fill_iface_data");
	MakeName	(0x1047b4f8,	"usbd_set_config_index");
	MakeName	(0x1047bb38,	"usbd_reset_port");
	MakeName	(0x1047bdf0,	"usbd_new_device");
	MakeRptCmt	(0x1047c0d4,	"usbd_remove_device ?");
	MakeName	(0x1047c760,	"usbd_devinfo");
	MakeName	(0x1047ca80,	"usbd_setup_xfer");
	MakeName	(0x1047cb44,	"usbd_setup_isoc_xfer");
	MakeName	(0x1047cba0,	"usbd_get_xfer_status");
	MakeName	(0x1047cbe0,	"usbd_get_config_descriptor");
	MakeName	(0x1047cbe8,	"usbd_get_interface_descriptor");
	MakeName	(0x1047cbf0,	"usbd_get_device_descriptor");
	MakeName	(0x1047cbf8,	"usbd_interface2endpoint_descriptor");
	MakeName	(0x1047cc14,	"usbd_abort_pipe");
	MakeName	(0x1047cc74,	"usbd_interface_count");
	MakeName	(0x1047cc90,	"usbd_interface2device_handle");
	MakeName	(0x1047cc9c,	"usbd_device2interface_handle");
	MakeName	(0x1047cccc,	"usbd_pipe2device_handle");
	MakeName	(0x1047ccd4,	"usbd_get_endpoint_descriptor");
	MakeName	(0x1047ce98,	"usbd_get_quirks");
	MakeName	(0x1047cf3c,	"wakeup");
	MakeName	(0x1047d03c,	"usbd_endpoint_count");
	MakeName	(0x1047d0c8,	"usbd_start_next");
	MakeName	(0x1047d2d8,	"usbd_free_xfer");
	MakeName	(0x1047d394,	"usbd_close_pipe");
	MakeName	(0x1047d410,	"usbd_alloc_xfer");
	MakeName	(0x1047d530,	"usbd_transfer");
	MakeName	(0x1047d91c,	"usbd_sync_transfer");
	MakeName	(0x1047d92c,	"usbd_do_request_flags_pipe");
	MakeName	(0x1047db38,	"usbd_do_request_flags");
	MakeName	(0x1047db78,	"usbd_do_request");
	MakeName	(0x1047dba0,	"usbd_get_interface");
	MakeName	(0x1047dbf8,	"usbd_set_interface");
//	MakeName	(0XFFFFFFFF,	"usbd_clear_endpoint_stall");:0x1047d8b0:0x1047dc94
	MakeName	(0x1047dd00,	"usbd_open_pipe_ival");
	MakeName	(0x1047de50,	"usbd_open_pipe_intr");
	MakeRptCmt	(0x1047dea4,	"inlined usbd_setup_xfer");
	MakeName	(0x1047df3c,	"usbd_open_pipe");
	MakeName	(0x1047df58,	"usbd_intr_transfer");
	MakeName	(0x1047e010,	"usbd_bulk_transfer");
	MakeName	(0x1047e0d0,	"usbd_intr_transfer_cb");
	MakeName	(0x1047e0e0,	"usbd_bulk_transfer_cb");
	MakeName	(0x1047e13c,	"usbd_set_port_feature");
	MakeName	(0x1047e18c,	"usbd_clear_port_feature");
	MakeName	(0x1047e27c,	"usbd_get_port_status");
	MakeName	(0x1047ed28,	"ehci_intr1");
	MakeName	(0x1047eed4,	"ehci_poll");
	MakeName	(0x1047ef68,	"ehci_roothub_exec");
	MakeName	(0x1047f5e4,	"ehci_freem");
	MakeName	(0x1047fee8,	"ehci_check_intr");
	MakeName	(0x104808e8,	"ehci_allocm");
	MakeName	(0x10480918,	"ehci_allocx");
	MakeName	(0x1048190c,	"ehci_rem_qh");
	MakeName	(0x1048199c,	"ehci_device_ctrl_close");
	MakeName	(0x104819d8,	"ehci_abort_xfer");
	MakeName	(0x10481b84,	"ehci_device_ctrl_abort");
	MakeName	(0x10481b88,	"j_ehci_abort_xfer_0");
	MakeName	(0x10481b8c,	"j_ehci_abort_xfer_1");
	MakeName	(0x10481fd8,	"ehci_open");
	MakeName	(0x104823fc,	"bsd_free");
	MakeRptCmt	(0x10482fa0,	"Texas Instruments ID");
	MakeRptCmt	(0x10482fb0,	"TI-Nspire ?");
	MakeName	(0x10483424,	"alloc_jhid_general");
	MakeName	(0x104837cc,	"jhid_attach");
	MakeName	(0x10483b14,	"jhid_match");
	MakeRptCmt	(0x10483b38,	"HID");
	MakeRptCmt	(0x10485580,	"usb_gadget_info. Never reached.");
	MakeName	(0x104858c8,	"dma_alloc");
	MakeName	(0x104864ac,	"utf16_strlen");
	MakeName	(0x10489dc0,	"__rt_udiv_2");
	MakeName	(0x10489eb4,	"__rt_udiv");
	MakeName	(0x10489edc,	"__rt_udiv_3");
	MakeName	(0x10489ffc,	"__rt_sdiv");
	MakeName	(0x1048aa1c,	"lua_number2integer");
	MakeName	(0x1048b318,	"_ll_udiv");
	MakeName	(0x1048c350,	"blowfish_encrypt");
	MakeName	(0x1048c890,	"blowfish_decrypt");
	MakeName	(0x1048cde8,	"blowfish_initialize_ctx");
	MakeName	(0x1048cfe8,	"cert_decrypt");
	MakeName	(0x1048dec8,	"blowfish_encrypt_8bit_unused");
//	MakeName	(0XFFFFFFFF,	"j_string_set_utf16");:0xfffffff:0x107451f4
	MakeName	(0x1052a7f8,	"j_TMT_Retreive_Clock_0");
	MakeName	(0x10551bb8,	"j_SMC_Delete_Semaphore_0");
	MakeName	(0x10552858,	"j_SMC_Delete_Semaphore_1");
	MakeName	(0x1055285c,	"j_j_SMC_Delete_Semaphore_1");
	MakeName	(0x1055379c,	"j_SMC_Delete_Semaphore_2");
	MakeName	(0x105537a0,	"j_j_SMC_Delete_Semaphore_2");
	MakeName	(0x10553efc,	"j_SMC_Delete_Semaphore_3");
//	MakeName	(0XFFFFFFFF,	"j_msc2_free_1");:0xfffffff:0xfffffff
	MakeName	(0x105726e4,	"registerNotifyCb");
//	MakeName	(0XFFFFFFFF,	"j_j_free");:0xfffffff:0x100004c0
	MakeName	(0x105856b4,	"j_j_free_15");
//	MakeName	(0XFFFFFFFF,	"j_j_free_17");:0xfffffff:0x10585ed0
//	MakeName	(0XFFFFFFFF,	"j_j_free_18");:0xfffffff:0x10585ed0
//	MakeName	(0XFFFFFFFF,	"j_j_free_19");:0xfffffff:0x10585ed0
//	MakeName	(0XFFFFFFFF,	"j_j_free_20");:0xfffffff:0x10585ed0
//	MakeName	(0XFFFFFFFF,	"j_j_free_23");:0xfffffff:0x10585ed0
	MakeName	(0x1059789c,	"ascii2utf16_with_alloc");
	MakeName	(0x105b5a90,	"string_free_0");
	MakeName	(0x105b5ad4,	"j_string_new_1");
	MakeName	(0x105dc970,	"show_dialog_box?");
	MakeName	(0x105f5524,	"_show_2NumericInput");
	MakeName	(0x105f5a30,	"_show_1NumericInput");
	MakeName	(0x105f5e30,	"TI_DM_1NumericInput_System");
//	MakeName	(0XFFFFFFFF,	"TI_DM_1NumericInput_PartialFunc");:0xfffffff:0x105f5e30
	MakeName	(0x105f6440,	"j_unknown_TI_ZIPArchive_Open");
	MakeName	(0x10616a70,	"__OS_drawProgramEditor");
	MakeName	(0x106535e8,	"getfunc");
	MakeName	(0x106c102c,	"j_string_concat_utf16");
//	MakeName	(0XFFFFFFFF,	"j_string_str");:0xfffffff:0x100c57c0
//	MakeName	(0XFFFFFFFF,	"j_string_free");:0xfffffff:0x10000001
//	MakeName	(0XFFFFFFFF,	"j_string_new");:0xfffffff:0x10000001
//	MakeName	(0XFFFFFFFF,	"j_msc2_free_2");:0xfffffff:0x10000001
	MakeName	(0x10805a90,	"j_SMC_Delete_Semaphore_4");
	MakeName	(0x10808498,	"getcurrenv");
	MakeName	(0x108084e4,	"lua_xmove");
	MakeName	(0x108085a0,	"lua_setlevel");
	MakeName	(0x108085ac,	"lua_atpanic");
	MakeName	(0x108085bc,	"lua_gettop");
	MakeName	(0x108085d0,	"lua_settop");
	MakeName	(0x1080862c,	"lua_remove");
	MakeName	(0x1080867c,	"lua_insert");
	MakeName	(0x1080872c,	"lua_pushvalue");
	MakeName	(0x1080875c,	"lua_type");
	MakeName	(0x1080877c,	"lua_typename");
	MakeName	(0x10808798,	"lua_iscfunction");
	MakeName	(0x108087c4,	"lua_isstring");
	MakeName	(0x108087e0,	"lua_isuserdata");
	MakeName	(0x10808834,	"lua_tocfunction");
	MakeName	(0x10808868,	"lua_touserdata");
	MakeName	(0x10808898,	"lua_tothread");
	MakeName	(0x108088b4,	"lua_topointer");
	MakeName	(0x10808914,	"lua_pushnil");
	MakeName	(0x10808930,	"lua_pushnumber");
	MakeName	(0x10808950,	"lua_pushinteger");
	MakeName	(0x10808980,	"lua_pushboolean");
	MakeName	(0x108089a8,	"lua_pushlightuserdata");
	MakeName	(0x108089c8,	"lua_pushthread");
	MakeName	(0x108089fc,	"lua_getmetatable");
	MakeName	(0x10808a68,	"lua_getfenv");
	MakeName	(0x10808ca8,	"lua_setfenv");
	MakeName	(0x10808d60,	"lua_newuserdata");
	MakeName	(0x10808dc0,	"lua_concat");
//	MakeName	(0XFFFFFFFF,	"lua_pushlstring");:0x10808e5c:0x108095d8
	MakeName	(0x10808ebc,	"lua_next");
	MakeName	(0x10808efc,	"lua_error");
	MakeName	(0x10808f0c,	"lua_gc");
	MakeName	(0x10809000,	"lua_dump");
	MakeName	(0x10809050,	"lua_load");
	MakeName	(0x1080909c,	"lua_cpcall");
	MakeName	(0x108090d8,	"lua_pcall");
	MakeName	(0x10809160,	"lua_pushcclosure");
	MakeName	(0x10809274,	"f_Ccall");
	MakeName	(0x108092f0,	"lua_call");
	MakeName	(0x1080932c,	"lua_setmetatable");
	MakeName	(0x108093ec,	"lua_rawseti");
	MakeName	(0x1080947c,	"lua_rawset");
	MakeName	(0x10809508,	"lua_pushstring");
	MakeName	(0x1080953c,	"lua_setfield");
	MakeName	(0x108095a4,	"lua_settable");
//	MakeName	(0XFFFFFFFF,	"lua_createtable");:0x10808e5c:0x108095d8
	MakeName	(0x10809638,	"lua_rawgeti");
	MakeName	(0x10809678,	"lua_rawget");
	MakeName	(0x108096ac,	"lua_getfield");
	MakeName	(0x10809710,	"lua_gettable");
	MakeName	(0x10809738,	"lua_pushvfstring");
	MakeName	(0x10809774,	"lua_pushfstring");
	MakeName	(0x108097c4,	"lua_objlen");
	MakeName	(0x1080983c,	"lua_tolstring");
	MakeName	(0x108098c8,	"lua_tointeger");
	MakeName	(0x10809908,	"lua_tonumber");
	MakeName	(0x10809948,	"lua_isnumber");
	MakeName	(0x1080997c,	"lua_lessthan");
	MakeName	(0x108099d0,	"lua_equal");
	MakeName	(0x10809a3c,	"lua_rawequal");
	MakeName	(0x10809a8c,	"lua_replace");
	MakeName	(0x10809b90,	"lua_newthread");
	MakeName	(0x10809bd8,	"lua_checkstack");
	MakeName	(0x10809c54,	"libsize");
	MakeName	(0x10809c7c,	"luaL_buffinit");
	MakeName	(0x10809c94,	"getS");
	MakeName	(0x10809cb0,	"luaL_newstate");
	MakeName	(0x10809ce0,	"Lua_unprotected_error");
	MakeName	(0x10809d10,	"l_alloc");
	MakeName	(0x10809d3c,	"luaL_loadbuffer");
	MakeName	(0x10809d60,	"luaL_loadstring");
	MakeName	(0x10809d8c,	"emptybuffer");
	MakeName	(0x10809dcc,	"errfile");
	MakeName	(0x10809e34,	"luaL_loadfile");
	MakeName	(0x1080a088,	"getF");
	MakeName	(0x1080a108,	"luaL_unref");
	MakeName	(0x1080a184,	"luaL_ref");
	MakeName	(0x1080a260,	"adjuststack");
	MakeName	(0x1080a2ec,	"luaL_addvalue");
	MakeName	(0x1080a38c,	"luaL_prepbuffer");
	MakeName	(0x1080a3b0,	"luaL_addlstring");
	MakeName	(0x1080a4f0,	"luaL_addstring");
	MakeName	(0x1080a518,	"luaL_pushresult");
	MakeName	(0x1080a53c,	"luaL_findtable");
	MakeName	(0x1080a648,	"luaL_gsub");
	MakeName	(0x1080a704,	"luaL_newmetatable");
	MakeName	(0x1080a778,	"luaL_getmetafield");
	MakeName	(0x1080a7e4,	"luaL_callmeta");
	MakeName	(0x1080a860,	"luaL_where");
	MakeName	(0x1080a8f8,	"luaL_error");
	MakeName	(0x1080a94c,	"luaI_openlib");
	MakeName	(0x1080aaf8,	"luaL_register");
	MakeName	(0x1080ab00,	"luaL_checkstack");
	MakeName	(0x1080ab30,	"luaL_argerror");
	MakeName	(0x1080ac24,	"luaL_checkany");
	MakeName	(0x1080ac54,	"luaL_typerror");
	MakeName	(0x1080aca0,	"tag_error");
	MakeName	(0x1080acc8,	"luaL_checkinteger");
	MakeName	(0x1080ad14,	"luaL_optinteger");
	MakeName	(0x1080ad48,	"luaL_checknumber");
	MakeName	(0x1080adb0,	"luaL_optnumber");
	MakeName	(0x1080adec,	"luaL_checklstring");
	MakeName	(0x1080ae24,	"luaL_optlstring");
	MakeName	(0x1080ae80,	"luaL_checktype");
	MakeName	(0x1080aeb0,	"luaL_checkudata");
	MakeName	(0x1080af3c,	"luaL_checkoption");
	MakeName	(0x1080afd0,	"luaB_print");
	MakeName	(0x1080afd8,	"luaB_yield");
	MakeName	(0x1080aff4,	"lua_status");
	MakeName	(0x1080b088,	"luaL_auxresume");
	MakeName	(0x1080b188,	"luaB_auxwrap");
	MakeName	(0x1080b214,	"luaB_costatus");
	MakeName	(0x1080b26c,	"luaB_corunning");
	MakeName	(0x1080b290,	"load_aux");
	MakeName	(0x1080b2bc,	"luaB_coresume");
	MakeName	(0x1080b34c,	"luaB_cocreate");
	MakeName	(0x1080b3c0,	"luaB_cowrap");
	MakeName	(0x1080b3e8,	"auxopen");
	MakeName	(0x1080b428,	"base_open");
	MakeName	(0x1080b550,	"luaopen_base");
	MakeName	(0x1080b57c,	"luaB_pcall");
	MakeName	(0x1080b5d0,	"luaB_xpcall");
	MakeName	(0x1080b634,	"luaB_pairs");
	MakeName	(0x1080b674,	"luaB_error");
	MakeName	(0x1080b6e4,	"luaB_unpack");
	MakeName	(0x1080b808,	"luaB_type");
	MakeName	(0x1080b844,	"luaB_tostring");
	MakeName	(0x1080b960,	"luaB_tonumber");
	MakeName	(0x1080ba7c,	"luaB_setmetatable");
	MakeName	(0x1080bc48,	"luaB_setfenv");
	MakeName	(0x1080bd28,	"luaB_select");
	MakeName	(0x1080bdcc,	"ipairsaux");
	MakeName	(0x1080be2c,	"luaB_ipairs");
	MakeName	(0x1080be70,	"luaB_rawset");
	MakeName	(0x1080bebc,	"luaB_rawget");
	MakeName	(0x1080befc,	"luaB_rawequal");
	MakeName	(0x1080bf3c,	"luaB_assert");
	MakeName	(0x1080bf98,	"luaB_loadstring");
	MakeName	(0x1080bff0,	"luaB_load");
	MakeName	(0x1080c054,	"generic_reader");
	MakeName	(0x1080c0f0,	"luaB_getmetatable");
	MakeName	(0x1080c140,	"luaB_getfenv");
	MakeName	(0x1080c190,	"luaB_gcinfo");
	MakeName	(0x1080c1b8,	"luaB_collectgarbage");
	MakeName	(0x1080c2b4,	"luaB_newproxy");
	MakeName	(0x1080c3bc,	"luaB_next");
	MakeName	(0x1080c404,	"currentpc");
	MakeName	(0x1080c45c,	"currentline");
	MakeName	(0x1080c4d8,	"lua_getstack");
	MakeName	(0x1080c574,	"getluaproto");
	MakeName	(0x1080cdb8,	"kname");
	MakeName	(0x1080cdf0,	"isinstack");
	MakeName	(0x1080ce54,	"info_tailcall");
	MakeName	(0x1080ceac,	"funcinfo");
	MakeName	(0x1080cfec,	"luaG_errormsg");
	MakeName	(0x1080d094,	"luaG_runerror");
	MakeName	(0x1080d0dc,	"luaG_ordererror");
	MakeName	(0x1080d130,	"getobjname");
	MakeName	(0x1080d2b8,	"luaG_typeerror");
	MakeName	(0x1080d3bc,	"getfuncname");
	MakeName	(0x1080d478,	"auxgetinfo");
	MakeName	(0x1080d644,	"findlocal");
	MakeName	(0x1080d72c,	"collectvalidlines");
	MakeName	(0x1080d7ec,	"lua_getinfo");
	MakeName	(0x1080db60,	"lua_yield");
	MakeName	(0x1080dba4,	"luaD_seterrorobj");
	MakeName	(0x1080dcd0,	"restore_stack_limit");
	MakeName	(0x1080dd04,	"resetstack");
	MakeName	(0x1080e370,	"luaD_rawrunprotected");
	MakeName	(0x1080e3d4,	"luaD_pcall");
	MakeName	(0x1080e538,	"lua_resume");
	MakeName	(0x1080e918,	"resume");
	MakeName	(0x1080e9b8,	"luaD_call");
	MakeName	(0x1080f1c4,	"luaF_getlocalname");
	MakeName	(0x1080f5f8,	"luaF_newCclosure");
	MakeName	(0x1080f648,	"luaF_close");
	MakeName	(0x10810014,	"luaC_separateudata");
	MakeName	(0x10810ee0,	"luaopen_math");
	MakeName	(0x10811a34,	"luaM_realloc_");
	MakeName	(0x10811b5c,	"load_lua_libs");
	MakeName	(0x10811f44,	"luaO_rawequalObj");
	MakeName	(0x10811fcc,	"luaO_chunkid");
	MakeName	(0x10815094,	"preinit_state");
	MakeName	(0x1081512c,	"close_state");
	MakeName	(0x108151ac,	"lua_close");
	MakeName	(0x10815220,	"lua_newstate");
	MakeName	(0x10815344,	"stack_init");
	MakeName	(0x10815420,	"callallgcTM");
	MakeName	(0x10815424,	"f_luaopen");
	MakeName	(0x108154bc,	"luaE_newthread");
	MakeName	(0x10815534,	"luaS_newudata");
	MakeName	(0x108155ac,	"luaS_resize");
	MakeName	(0x108157a4,	"l_setbit");
	MakeName	(0x10816604,	"lua_toboolean");
	MakeName	(0x108175c8,	"scanformat");
	MakeName	(0x10817ba8,	"luaopen_string");
	MakeName	(0x10818e04,	"sethvalue");
	MakeName	(0x10818e88,	"luaopen_table");
	MakeName	(0x10819b38,	"luaT_init");
	MakeName	(0x1081adcc,	"luaV_lessthan");
	MakeName	(0x1081aefc,	"luaV_equalval");
	MakeName	(0x1081afec,	"luaV_settable");
	MakeName	(0x1081b220,	"luaV_gettable");
	MakeName	(0x1081b8d0,	"tonumber");
	MakeName	(0x10820058,	"luaX_init");
//	MakeName	(0XFFFFFFFF,	"j_unknown_TI_AllocateBlock_");:0xfffffff:0x109494a4
	MakeName	(0x1094977c,	"j_j_free_21");
//	MakeName	(0XFFFFFFFF,	"_show_msgUserInput");:0xfffffff:0x10001b28
	MakeName	(0x10950c94,	"lua_var_recall");
	MakeName	(0x1097ecfc,	"j_strncpy");
	MakeName	(0x1099c714,	"j_j_free_22");
	MakeName	(0x109a0158,	"j_j_j_free_24");
	MakeName	(0x109a27f4,	"isprint");
//	MakeName	(0XFFFFFFFF,	"j_SMC_Delete_Semaphore_6");:0xfffffff:0x102c08b5
//	MakeName	(0XFFFFFFFF,	"j_msc2_free_4");:0xfffffff:0x102c08b5
	MakeName	(0x109ba010,	"j_j_free_25");
	MakeName	(0x109ba014,	"j_unknown_TI_AllocateBlock__0");
	MakeName	(0x109e6e7c,	"lua_math__evalexpr");
	MakeName	(0x10a062b4,	"j_j_free_26");
	MakeName	(0x10a09480,	"j_j_free_27");
	MakeName	(0x10a09c54,	"a84chdrvr");
	MakeName	(0x10a09c60,	"a84chuser");
	MakeName	(0x10a09c9c,	"a84cfuser");
	MakeName	(0x10a09ca8,	"a84cfdrvr");
	MakeName	(0x10a0dd44,	"a1_2_1");
//	MakeName	(0XFFFFFFFF,	"a02x02x02x02x02");:0x10a0e908:0x10a0e90c
	MakeName	(0x10a0ee8c,	"a1_2");
	MakeName	(0x10a0eeac,	"a1_7");
	MakeName	(0x10a0eebc,	"a64");
	MakeName	(0x10a0eec4,	"a8_0");
	MakeName	(0x10a0eed0,	"a0_95");
	MakeName	(0x10a0fce0,	"a7");
	MakeName	(0x10a0fce4,	"a10");
	MakeName	(0x10a0fcec,	"a11");
	MakeName	(0x10a0fcf4,	"a12_3");
	MakeName	(0x10a0fcfc,	"a16");
	MakeName	(0x10a0fd04,	"a24");
	MakeName	(0x10a0fd68,	"a_bmp");
	MakeName	(0x10a100e4,	"a30sD");
	MakeName	(0x10a100f8,	"a30sS");
	MakeName	(0x10a1010c,	"a30sD_D_D_D");
	MakeName	(0x10a10128,	"a30s0x08x");
	MakeName	(0x10a10140,	"a30sXXXXXX");
//	MakeName	(0XFFFFFFFF,	"a8s25s3s");:0xfffffff:0x10a24900
//	MakeName	(0XFFFFFFFF,	"a8s2d22s3d");:0xfffffff:0x10a24900
	MakeName	(0x10a12ff8,	"a02x_0");
	MakeName	(0x10a130fc,	"a02d02d02d_03d");
	MakeName	(0x10a16588,	"a0x02x0x02x0x02");
	MakeName	(0x10a17d88,	"a_tns");
	MakeName	(0x10a18090,	"a031m");
	MakeName	(0x10a18098,	"a133m");
	MakeName	(0x10a180a0,	"a037m");
	MakeName	(0x10a180a8,	"a14533m");
	MakeName	(0x10a180b4,	"a0m");
	MakeName	(0x10a191f0,	"a0x");
	MakeName	(0x10a19c08,	"a08u0c");
	MakeName	(0x10a1d994,	"a_ns_svc_");
//	MakeName	(0XFFFFFFFF,	"a0x02x");:0xfffffff:0xfffffff
//	MakeName	(0XFFFFFFFF,	"a0x08zx");:0xfffffff:0x10a1283b
//	MakeName	(0XFFFFFFFF,	"a02x");:0xfffffff:0xfffffff
	MakeName	(0x10a1f898,	"a_dylib");
	MakeName	(0x10a220d8,	"a04xService");
	MakeName	(0x10a22544,	"a2_0_0");
	MakeName	(0x10a234c8,	"a0el");
	MakeName	(0x10a23528,	"a1keyword");
	MakeName	(0x10a23fdc,	"a1PinfoErrinfo_");
	MakeName	(0x10a248f8,	"a10000");
	MakeName	(0x10a24900,	"a8s8sS");
	MakeName	(0x10a24918,	"a8s08xS");
	MakeName	(0x10a24950,	"a8s3s3s6s");
	MakeName	(0x10a24974,	"a8s3s3d6s");
	MakeName	(0x10a24988,	"a8s3s3d3s3d08x5");
	MakeName	(0x10a249b0,	"a8s3s3s3s3s8s5s");
	MakeName	(0x10a27518,	"a2_10");
	MakeName	(0x10a28190,	"a2dEditorShould");
	MakeName	(0x10a281fc,	"a0Status");
	MakeName	(0x10a2825c,	"a0");
	MakeName	(0x10a2866c,	"a1PerrinfoRterr");
	MakeName	(0x10a29a7c,	"a08x");
	MakeName	(0x10a2f728,	"a1varstats");
	MakeName	(0x10a2f734,	"a2varstats");
	MakeName	(0x10a30550,	"a1SelfErrinfo_r");
	MakeName	(0x10a3056c,	"a2deditorIsNotU");
	MakeName	(0x10a30a40,	"a_ver");
	MakeName	(0x10a30a50,	"a_devmod");
	MakeName	(0x10a30a60,	"a_ffunc");
	MakeName	(0x10a30a70,	"a_debug");
	MakeName	(0x10a30a80,	"a_trace");
	MakeName	(0x10a30a88,	"a_gccol");
	MakeName	(0x10a30a90,	"a_gcp");
	MakeName	(0x10a30a98,	"a_gcsm");
	MakeName	(0x10a30aa0,	"a_script");
//	MakeName	(0XFFFFFFFF,	"a_mem");:0xfffffff:0xfffffff
	MakeName	(0x10a31d98,	"a_loaded");
	MakeName	(0x10a5041c,	"a_l");
//	MakeName	(0XFFFFFFFF,	"a2_2");:0xfffffff:0xfffffff
//	MakeName	(0XFFFFFFFF,	"a2_3");:0xfffffff:0x10a89fc2
//	MakeName	(0XFFFFFFFF,	"a3_0_0");:0xfffffff:0x10a89fc2
	MakeName	(0x10a51850,	"a_res");
//	MakeName	(0XFFFFFFFF,	"a13");:0xfffffff:0xfffffff
	MakeName	(0x10a51dfc,	"a3_0");
	MakeName	(0x10a52548,	"a_14r");
	MakeName	(0x10a52560,	"a_12f_0");
	MakeName	(0x10a52580,	"a00");
	MakeName	(0x10a52584,	"a0000_010_00_10");
	MakeName	(0x10a527c0,	"a0LengthRealloc");
	MakeName	(0x10a52960,	"a0000xmnp");
	MakeName	(0x10a53900,	"a1To5ColumnsSup");
	MakeName	(0x10a548bc,	"a2dEditorPointe");
	MakeName	(0x10a59a58,	"a0123456789abcd");
	MakeName	(0x10a5a39c,	"a2dEditorParent");
	MakeName	(0x10a5bc6c,	"a0_0");
	MakeName	(0x10a5f108,	"a_");
	MakeName	(0x10a5f6d0,	"a0_1");
	MakeName	(0x10a5f6d8,	"a9e999");
	MakeName	(0x10a60e38,	"a255");
	MakeName	(0x10a60e40,	"a31");
	MakeName	(0x10a5c474,	"a00_1");
	MakeName	(0x10a6262c,	"a12u");
	MakeName	(0x10a62be8,	"a02d02d02d02d_0");
	MakeName	(0x10a63410,	"a02x02x02x02x_0");
	MakeName	(0x10a63a78,	"a10sSS");
	MakeName	(0x10a63a90,	"a10dSS");
	MakeName	(0x10a63f38,	"odd_parity");
	MakeName	(0x10a6a37c,	"a0_2");
//	MakeName	(0XFFFFFFFF,	"a_Tpconfig_gene");:0xfffffff:0x10a6ab99
	MakeName	(0x10a6cbb8,	"a2_1");
	MakeName	(0x10a6d028,	"a0_001");
	MakeName	(0x10a6d034,	"a0_1_0");
	MakeName	(0x10a6d03c,	"a14");
	MakeName	(0x10a6d1c8,	"a3dFunctionGrap");
	MakeName	(0x10a6d1f4,	"a3dParametricGr");
	MakeName	(0x10a6d224,	"a3dScatterPlotG");
	MakeName	(0x10a6d4dc,	"a0_1_");
	MakeName	(0x10a6e8d8,	"a5");
	MakeName	(0x10a70774,	"a3dgraphingview");
	MakeName	(0x10a70824,	"a3dgraphingvi_0");
	MakeName	(0x10a708bc,	"a3dfunction");
	MakeName	(0x10a70bb4,	"a3dgraphtype");
	MakeName	(0x10a72c78,	"a0Ls");
	MakeName	(0x10a72c84,	"a1Ls");
	MakeName	(0x10a72cb4,	"a__");
	MakeName	(0x10a73cdc,	"a_SummaryDBlock");
	MakeName	(0x10a73e34,	"a_13e");
	MakeName	(0x10a73e40,	"a_13f");
//	MakeName	(0XFFFFFFFF,	"a00000000000000");:0x10a0cf3a:0x10a0cf3c
	MakeName	(0x10a7e5cc,	"a0_");
	MakeName	(0x10a80840,	"a02x02x02x02x_1");
	MakeName	(0x10a80860,	"a29s17s3d3_2f3u");
	MakeName	(0x10a813f8,	"a000000093701aa");
	MakeName	(0x10a81b38,	"a_tno");
	MakeName	(0x10a81b40,	"a_tnc");
	MakeName	(0x10a82574,	"a35s02x02x02x02");
	MakeName	(0x10a8294c,	"a02x02x02x02x_2");
	MakeName	(0x10a82970,	"a0NspireCradleD");
	MakeName	(0x10a83024,	"a0NspireUpgrade");
	MakeName	(0x10a838a4,	"keywords_ini");
//	MakeName	(0XFFFFFFFF,	"a0123456789an_e");:0x10a86834:0x10a868cc
//	MakeName	(0XFFFFFFFF,	"a0123456789an_0");:0x10a868cc:0x10a868cc
	MakeName	(0x10a86918,	"a0500");
	MakeName	(0x10a8e3e0,	"a02d02d02d02d02");
	MakeName	(0x10a8e64c,	"a04d02d02d02d02");
	MakeName	(0x10a91498,	"a66666666666666");
	MakeName	(0x10a9269c,	"a3des");
	MakeName	(0x10a92a8c,	"a0x12");
	MakeName	(0x10a941c0,	"a_Msg");
	MakeName	(0x10a9599c,	"a802_1xAuthenti");
	MakeName	(0x10a97a58,	"a84clk");
	MakeName	(0x10a97a60,	"a84cdrvsm");
	MakeName	(0x10a97a74,	"a84chisr");
	MakeName	(0x10a97a88,	"a84chhisr");
	MakeName	(0x10a982a0,	"a00000008");
	MakeName	(0x10a982ac,	"a00000000002");
	MakeName	(0x10a982b8,	"a8463847412");
	MakeName	(0x10a983d4,	"a02d");
	MakeName	(0x10a983e8,	"a2d");
	MakeName	(0x10a98f34,	"a_3s_3s3d_2d_2d");
	MakeName	(0x10a99560,	"a0123456789ab_2");
	MakeName	(0x10a99574,	"a0123456789ab_3");
	MakeName	(0x10a99758,	"a3u");
	MakeName	(0x10a99764,	"a100_0");
	MakeName	(0x10a99fc4,	"a2_10_1150_0");
	MakeName	(0x10a9a180,	"a3u_0");
	MakeName	(0x10a9a1a4,	"a2_10_1150");
	MakeName	(0x10a9a1e4,	"a0123456789ab_4");
	MakeName	(0x10a9a1f8,	"a0123456789ab_5");
	MakeName	(0x10a9a788,	"a0123456789ab_0");
	MakeName	(0x10a9a9f4,	"a_Lu");
//	MakeName	(0XFFFFFFFF,	"a9");:0xfffffff:0x10a9ab60
	MakeName	(0x10a9acb8,	"a0123456789ab_6");
	MakeName	(0x10a9ae48,	"a09lu");
	MakeName	(0x10a9c850,	"a2csenc");
	MakeName	(0x10a9c858,	"a2ssenc");
	MakeName	(0x10a9c860,	"a2sch_a");
	MakeName	(0x10a9c868,	"a2sch_b");
	MakeName	(0x10a9c870,	"a2gsh_a");
	MakeName	(0x10a9c878,	"a2gsh_b");
	MakeName	(0x10a9c880,	"a2scmka");
	MakeName	(0x10a9c888,	"a2scmkb");
	MakeName	(0x10a9c890,	"a2scf_a");
	MakeName	(0x10a9c898,	"a2scf_b");
	MakeName	(0x10a9c8a0,	"a2scc_a");
	MakeName	(0x10a9c8a8,	"a2scc_b");
	MakeName	(0x10a9c8b0,	"a2scc_c");
	MakeName	(0x10a9c8b8,	"a2scc_d");
	MakeName	(0x10a9c8c0,	"a2gsv_a");
	MakeName	(0x10a9c8c8,	"a2gsv_b");
	MakeName	(0x10a9c8d0,	"a2gsf_a");
	MakeName	(0x10a9c8d8,	"a2gsf_b");
	MakeName	(0x10a9c8e0,	"a2gch_a");
	MakeName	(0x10a9c8e8,	"a2gch_b");
	MakeName	(0x10a9c8f0,	"a2gch_c");
	MakeName	(0x10a9c8f8,	"a2ssh_a");
	MakeName	(0x10a9c900,	"a2ssh_b");
	MakeName	(0x10a9c908,	"a2gcmka");
	MakeName	(0x10a9c910,	"a2ssv_a");
	MakeName	(0x10a9c918,	"a2ssv_b");
	MakeName	(0x10a9c920,	"a2ssv_c");
	MakeName	(0x10a9c928,	"a2gcf_a");
	MakeName	(0x10a9c930,	"a2gcf_b");
	MakeName	(0x10a9c938,	"a2ssf_a");
	MakeName	(0x10a9c940,	"a2ssf_b");
	MakeName	(0x10a9c948,	"a2src_a");
	MakeName	(0x10a9c950,	"a2src_b");
	MakeName	(0x10a9c958,	"a2src_c");
	MakeName	(0x10a9c960,	"a2src_d");
	MakeName	(0x10a9c968,	"a2x9gsc");
	MakeName	(0x10a9c970,	"a2x9gcc");
	MakeName	(0x10a9c978,	"a3flush");
	MakeName	(0x10a9c980,	"a3wch_a");
	MakeName	(0x10a9c988,	"a3wch_b");
	MakeName	(0x10a9c990,	"a3rsh_a");
	MakeName	(0x10a9c998,	"a3rsh_b");
	MakeName	(0x10a9c9a0,	"a3rsc_a");
	MakeName	(0x10a9c9a8,	"a3rsc_b");
	MakeName	(0x10a9c9b0,	"a3rskea");
	MakeName	(0x10a9c9b8,	"a3rskeb");
	MakeName	(0x10a9c9c0,	"a3rcr_a");
	MakeName	(0x10a9c9c8,	"a3rcr_b");
	MakeName	(0x10a9c9d0,	"a3rsd_a");
	MakeName	(0x10a9c9d8,	"a3rsd_b");
	MakeName	(0x10a9c9e0,	"a3wcc_a");
	MakeName	(0x10a9c9e8,	"a3wcc_b");
	MakeName	(0x10a9c9f0,	"a3wcc_c");
	MakeName	(0x10a9c9f8,	"a3wcc_d");
	MakeName	(0x10a9ca00,	"a3wckea");
	MakeName	(0x10a9ca08,	"a3wckeb");
	MakeName	(0x10a9ca10,	"a3wcv_a");
	MakeName	(0x10a9ca18,	"a3wcv_b");
	MakeName	(0x10a9ca20,	"a3wccsa");
	MakeName	(0x10a9ca28,	"a3wccsb");
	MakeName	(0x10a9ca30,	"a3wfina");
	MakeName	(0x10a9ca38,	"a3wfinb");
	MakeName	(0x10a9ca40,	"a3rccsa");
	MakeName	(0x10a9ca48,	"a3rccsb");
	MakeName	(0x10a9ca50,	"a3rfina");
	MakeName	(0x10a9ca58,	"a3rfinb");
	MakeName	(0x10a9ca60,	"a3whr_a");
	MakeName	(0x10a9ca68,	"a3whr_b");
	MakeName	(0x10a9ca70,	"a3whr_c");
	MakeName	(0x10a9ca78,	"a3rch_a");
	MakeName	(0x10a9ca80,	"a3rch_b");
	MakeName	(0x10a9ca88,	"a3rch_c");
	MakeName	(0x10a9ca90,	"a3wsh_a");
	MakeName	(0x10a9ca98,	"a3wsh_b");
	MakeName	(0x10a9caa0,	"a3wsc_a");
	MakeName	(0x10a9caa8,	"a3wsc_b");
	MakeName	(0x10a9cab0,	"a3wskea");
	MakeName	(0x10a9cab8,	"a3wskeb");
	MakeName	(0x10a9cac0,	"a3wcr_a");
	MakeName	(0x10a9cac8,	"a3wcr_b");
	MakeName	(0x10a9cad0,	"a3wsd_a");
	MakeName	(0x10a9cad8,	"a3wsd_b");
	MakeName	(0x10a9cae0,	"a3rcc_a");
	MakeName	(0x10a9cae8,	"a3rcc_b");
	MakeName	(0x10a9caf0,	"a3rckea");
	MakeName	(0x10a9caf8,	"a3rckeb");
	MakeName	(0x10a9cb00,	"a3rcv_a");
	MakeName	(0x10a9cb08,	"a3rcv_b");
	MakeName	(0x10a9cb10,	"a23wcha");
	MakeName	(0x10a9cb18,	"a23wchb");
	MakeName	(0x10a9cb20,	"a23rsha");
	MakeName	(0x10a9cb28,	"a23rcha");
	MakeName	(0x10a9cb30,	"a23rchb");
	MakeName	(0x10a9d3e4,	"a0Length");
	MakeName	(0x10a9d940,	"a0001");
	MakeName	(0x10a9f1e0,	"a0parvtxx");
	MakeName	(0x10a9f1f4,	"a0parvtxy");
	MakeName	(0x10a9f208,	"a0parstdx");
	MakeName	(0x10a9f21c,	"a0parstdy");
	MakeName	(0x10a9f230,	"a0circlegraphic");
	MakeName	(0x10a9f25c,	"a0circlegraph_0");
	MakeName	(0x10a9f280,	"a0ellipsecenter");
	MakeName	(0x10a9f2a0,	"a0hyperbolaew");
	MakeName	(0x10a9f2bc,	"a0hyperbolans");
	MakeName	(0x10a9f2d8,	"a0conicgeneral");
	MakeName	(0x10a9f2f4,	"a0lineslopeinte");
	MakeName	(0x10a9f31c,	"a0linevertical");
	MakeName	(0x10a9f338,	"a0linestandard");
	MakeName	(0x10a9f358,	"a1keyword1keywo");
	MakeName	(0x10aa0428,	"a0Buffersize");
	MakeName	(0x10aa0720,	"a1D2editor_fm_t");
	MakeName	(0x10aa291c,	"a0abs");
	MakeName	(0x10aa2928,	"a0deriv");
	MakeName	(0x10aa2938,	"a0fraction");
	MakeName	(0x10aa294c,	"a0integral");
	MakeName	(0x10aa2960,	"a0limit");
	MakeName	(0x10aa2970,	"a0logn");
	MakeName	(0x10aa297c,	"a0nroot");
	MakeName	(0x10aa298c,	"a0piecewise");
	MakeName	(0x10aa29a4,	"a0power");
	MakeName	(0x10aa29b4,	"a0product");
	MakeName	(0x10aa29c8,	"a0sqrt");
	MakeName	(0x10aa29d4,	"a0sum");
	MakeName	(0x10aa29e0,	"a0system");
	MakeName	(0x10aa29f0,	"a0dms");
	MakeName	(0x10aa2b78,	"a0PnodepoolNfre");
	MakeName	(0x10aa2c20,	"a0Uintptr_tPnod");
	MakeName	(0x10aa41a0,	"a1angle");
	MakeName	(0x10aa4200,	"a0Switchw");
	MakeName	(0x10aa431c,	"a1circle");
	MakeName	(0x10aa4424,	"a2Y");
	MakeName	(0x10aa4438,	"a2_4");
	MakeName	(0x10aa4448,	"a2");
	MakeName	(0x10aa45fc,	"a0_6");
	MakeName	(0x10aa4744,	"a0comment");
	MakeName	(0x10aa4b40,	"a1ArgcArgc3");
	MakeName	(0x10aa4e50,	"a1doc");
	MakeName	(0x10aa50c0,	"a0el_0");
	MakeName	(0x10aa60f4,	"a0func");
	MakeName	(0x10aa625c,	"a0gray");
	MakeName	(0x10aa67e4,	"a1keyword_0");
	MakeName	(0x10aa6a0c,	"a1line");
	MakeName	(0x10aa6e38,	"a1lineseg");
	MakeName	(0x10aa6f48,	"a0list");
	MakeName	(0x10aa7190,	"a0mathsubscript");
	MakeName	(0x10aa74a0,	"a0matrix");
	MakeName	(0x10aa7ac8,	"a0mline");
	MakeName	(0x10aa7da4,	"a0mlstatement");
	MakeName	(0x10aa8538,	"a1para");
	MakeName	(0x10aa88f4,	"a0paren");
	MakeName	(0x10aa8b84,	"a0prgm");
	MakeName	(0x10aa8dc0,	"a0WcscmpGetcstr");
	MakeName	(0x10aa8eb8,	"a0WcscmpGetcs_0");
	MakeName	(0x10aa90f0,	"a1ray");
	MakeName	(0x10aa91f8,	"a1rtline");
	MakeName	(0x10aa97e0,	"a1rtri");
	MakeName	(0x10aa99d8,	"a1subhead");
	MakeName	(0x10aa9ae8,	"a1subscrp");
	MakeName	(0x10aa9d10,	"a1supersc");
	MakeName	(0x10aa9f54,	"a1_1");
	MakeName	(0x10aa9f5c,	"a0text");
	MakeName	(0x10aaa478,	"a1title");
	MakeName	(0x10aaa57c,	"a1tri");
	MakeName	(0x10aaa680,	"a1vector");
	MakeName	(0x10aaa788,	"a1widgetnode");
	MakeName	(0x10aaae38,	"a1word");
	MakeName	(0x10aac40c,	"a2_5");
	MakeName	(0x10aac41c,	"a2Y_0");
	MakeName	(0x10aac434,	"a2Y_1");
	MakeName	(0x10aac44c,	"a2X");
	MakeName	(0x10aac484,	"a2_6");
	MakeName	(0x10aac494,	"a21");
	MakeName	(0x10aafe0c,	"a4BitAsyncIrqMo");
	MakeName	(0x10ab027c,	"a802_3AmsduFram");
	MakeName	(0x10ab2178,	"a0123456789ab_7");
	MakeName	(0x10ab3284,	"a2_1_0");
	MakeName	(0x10ab3694,	"a1mbps");
	MakeName	(0x10ab36a0,	"a2mbps");
	MakeName	(0x10ab36ac,	"a5_5mbps");
	MakeName	(0x10ab36b8,	"a11mbps");
	MakeName	(0x10ab36c4,	"a6mbps");
	MakeName	(0x10ab36d0,	"a9mbps");
	MakeName	(0x10ab36dc,	"a12mbps");
	MakeName	(0x10ab36e8,	"a18mbps");
	MakeName	(0x10ab36f4,	"a24mbps");
	MakeName	(0x10ab3700,	"a36mbps");
	MakeName	(0x10ab370c,	"a48mbps");
	MakeName	(0x10ab3718,	"a54mbps");
	MakeName	(0x10ab43a8,	"a2_2x");
	MakeName	(0x10ab43d8,	"a2_2x2_2x2_2x2_");
	MakeName	(0x10ab4b8c,	"a_kernelalloc");
	MakeName	(0x10ab4bac,	"a_kernelallocir");
	MakeName	(0x10ab4bd0,	"a_kernelfree");
	MakeName	(0x10ab4bf4,	"a_kernelfreeirq");
	MakeName	(0x10ab4c38,	"a_sdio_busdrive");
	MakeName	(0x10ab4c50,	"a_sdio_busdri_0");
	MakeName	(0x10ab4dc8,	"a_kernelalloc_0");
	MakeName	(0x10ab4dd8,	"a_kernelfree_0");
	MakeName	(0x10ab7fd0,	"a_res_0");
	MakeName	(0x10ab8004,	"a2dtemplates");
	MakeName	(0x10ab9894,	"a0S");
	MakeName	(0x10ab9898,	"a1S");
	MakeName	(0x10abd71c,	"a0123456789");
	MakeName	(0x10abd734,	"a_E");
	MakeName	(0x10abd740,	"a_G");
	MakeName	(0x10abd74c,	"a_F");
	MakeName	(0x10abd7d4,	"a_F_0");
	MakeName	(0x10abdb48,	"a1_3");
//	MakeName	(0XFFFFFFFF,	"a012345");:0x10abdb54:0x10abdbd0
	MakeName	(0x10abdb98,	"a01245");
//	MakeName	(0XFFFFFFFF,	"a01234567");:0x10abdb54:0x10abdbd0
	MakeName	(0x10abdc2c,	"a0134678");
//	MakeName	(0XFFFFFFFF,	"a012345678");:0x10abdb54:0x10abdbd0
	MakeName	(0x10abdce4,	"a01234");
	MakeName	(0x10abdd1c,	"a0123");
	MakeName	(0x10abdff4,	"a9876_54321");
	MakeName	(0x10abe0b4,	"a_2f");
	MakeName	(0x10abe600,	"a2ndParameterIs");
//	MakeName	(0XFFFFFFFF,	"a3_10_0");:0xfffffff:0xfffffff
	MakeName	(0x10ac02b8,	"a_0f");
	MakeName	(0x10ac02c4,	"a_11e");
	MakeName	(0x10ac02d0,	"a_11f");
	MakeName	(0x10ac2cbc,	"a_SetPickypix_0");
	MakeName	(0x10ac2d3c,	"a_SetPickypixel");
//	MakeName	(0XFFFFFFFF,	"a8");:0xfffffff:0x10a28f4c
	MakeName	(0x10ac417c,	"a0__0");
	MakeName	(0x10ac4184,	"a0_3");
	MakeName	(0x10ac418c,	"a0_0_0");
	MakeName	(0x10ac4198,	"a00_0");
	MakeName	(0x10ac41e0,	"a1_X");
	MakeName	(0x10ac41ec,	"a1_9");
	MakeName	(0x10ac41f8,	"a1_Y");
	MakeName	(0x10ac4204,	"a0_8");
	MakeName	(0x10ac4244,	"a1X_1");
	MakeName	(0x10ac424c,	"a1_X_0");
	MakeName	(0x10ac4258,	"a1Y");
	MakeName	(0x10ac4260,	"a1_Y_0");
	MakeName	(0x10ac426c,	"a0XY");
	MakeName	(0x10ac427c,	"a0X2");
	MakeName	(0x10ac428c,	"a0Y2");
	MakeName	(0x10ac429c,	"a0X_0");
	MakeName	(0x10ac42a8,	"a0Y");
	MakeName	(0x10ac42b4,	"a0XY_0");
	MakeName	(0x10ac42c4,	"a0X2_0");
	MakeName	(0x10ac42d4,	"a0Y2_0");
	MakeName	(0x10ac42e4,	"a0X_1");
	MakeName	(0x10ac42f0,	"a0Y_0");
	MakeName	(0x10ac42fc,	"a0XY_1");
	MakeName	(0x10ac430c,	"a0X2_1");
	MakeName	(0x10ac431c,	"a0Y2_1");
	MakeName	(0x10ac432c,	"a0X");
	MakeName	(0x10ac4338,	"a0Y_1");
	MakeName	(0x10ac4344,	"a0_XY");
	MakeName	(0x10ac4354,	"a0_X2");
	MakeName	(0x10ac4364,	"a0_Y2");
	MakeName	(0x10ac4374,	"a0_X");
	MakeName	(0x10ac4380,	"a0_Y");
	MakeName	(0x10ac438c,	"a0_XY_0");
	MakeName	(0x10ac439c,	"a0_X2_0");
	MakeName	(0x10ac43ac,	"a0_Y2_0");
	MakeName	(0x10ac43bc,	"a0_X_0");
	MakeName	(0x10ac43c8,	"a0_Y_0");
	MakeName	(0x10ac43d4,	"a0_XY_1");
	MakeName	(0x10ac43e4,	"a0_X_1");
	MakeName	(0x10ac43ec,	"a2_7");
	MakeName	(0x10ac43f4,	"a0_Y2_1");
	MakeName	(0x10ac4404,	"a0__1");
	MakeName	(0x10ac4410,	"a0_Y_1");
	MakeName	(0x10ac441c,	"a0_9");
	MakeName	(0x10ac4428,	"a0__2");
	MakeName	(0x10ac4434,	"a1_10");
	MakeName	(0x10ac4444,	"a1_11");
	MakeName	(0x10ac444c,	"a1_12");
	MakeName	(0x10ac4454,	"a1_13");
	MakeName	(0x10ac445c,	"a1_14");
	MakeName	(0x10ac4474,	"a0X2_2");
	MakeName	(0x10ac4480,	"a0X_2");
	MakeName	(0x10ac4488,	"a0Y2_2");
	MakeName	(0x10ac4494,	"a0Y_2");
	MakeName	(0x10ac449c,	"a0XY_2");
	MakeName	(0x10ac44a8,	"a0_10");
	MakeName	(0x10ac44b8,	"a0_11");
	MakeName	(0x10ac44c4,	"a0_12");
	MakeName	(0x10ac44d4,	"a0_14");
	MakeName	(0x10ac44e0,	"a0XY_3");
	MakeName	(0x10ac4b18,	"a4Tstep5");
	MakeName	(0x10ac4b3c,	"a2_11");
	MakeName	(0x10ac4bf0,	"a6_28");
	MakeName	(0x10ac4bfc,	"a0_13");
	MakeName	(0x10ac538c,	"a1_0");
//	MakeName	(0XFFFFFFFF,	"a0_4");:0xfffffff:0x10a09ee4
	MakeName	(0x10ac9abc,	"a5hds");
	MakeName	(0x10acd450,	"a2du3");
	MakeName	(0x10ad6cfc,	"a0_0ThizMvunit");
	MakeName	(0x10ad6d10,	"a0_0ThizMuunit");
	MakeName	(0x10ad7b08,	"a_x");
	MakeName	(0x10ad9d64,	"a1_4");
	MakeName	(0x10add438,	"a_14g_0");
	MakeName	(0x10add874,	"a1X");
	MakeName	(0x10ade8dc,	"a2_9");
	MakeName	(0x10ade8f0,	"a21_0");
	MakeName	(0x10ade908,	"a2_8");
	MakeName	(0x10adf850,	"a1_2_0");
//	MakeName	(0XFFFFFFFF,	"a2_0");:0xfffffff:0x10adf868
	MakeName	(0x10adf888,	"a12");
	MakeName	(0x10adf8d4,	"a12_2");
	MakeName	(0x10adf908,	"a12345");
	MakeName	(0x10adf938,	"a1234");
	MakeName	(0x10adfb60,	"a1");
	MakeName	(0x10adfc34,	"a1_8");
	MakeName	(0x10adfc44,	"a1X_0");
	MakeName	(0x10ae097c,	"a123");
	MakeName	(0x10ae0990,	"a100");
	MakeName	(0x10ae099c,	"a1X23");
	MakeName	(0x10ae0b18,	"a1Bound");
	MakeName	(0x10ae0b2c,	"a12_0");
	MakeName	(0x10ae0b40,	"a0X1_2");
	MakeName	(0x10ae0b68,	"a0X01");
	MakeName	(0x10ae0b7c,	"a0X1_21_3");
	MakeName	(0x10ae0ba8,	"a1_5");
	MakeName	(0x10ae0d10,	"a12_1");
	MakeName	(0x10ae0d94,	"a3");
	MakeName	(0x10ae0dc4,	"a3Zzz_dummy2");
	MakeName	(0x10ae177c,	"a0X1");
	MakeName	(0x10ae1790,	"a0X21X2");
	MakeName	(0x10ae17b8,	"a0X3");
	MakeName	(0x10ae17f0,	"a0X41X32X23X4");
	MakeName	(0x10ae183c,	"a0X1_0");
	MakeName	(0x10ae184c,	"a01X");
	MakeName	(0x10ae185c,	"a01LnX");
	MakeName	(0x10ae1878,	"a0Sin1X23");
	MakeName	(0x10ae20ec,	"a_12f");
	MakeName	(0x10ae4f5c,	"a_kernelfree_1");
	MakeName	(0x10ae4f9c,	"a_kernelalloc_1");
	MakeName	(0x10b11034,	"a_g");
	MakeName	(0x10b11040,	"a_version");
	MakeName	(0x10b11f14,	"a0_7");
	MakeName	(0x10b12340,	"a_14g");
	MakeName	(0x10b1271c,	"a_error_");
	MakeName	(0x10b1272c,	"a0y");
	MakeName	(0x10b12738,	"a0_14g");
	MakeName	(0x10b16ffc,	"a0123456789ab_1");
	MakeName	(0x10b189c4,	"a0_15");
	MakeName	(0x10b18e8c,	"a08lx");
	MakeName	(0x10b19148,	"a64Bytes");
	MakeName	(0x10b19164,	"a64And128Bytes");
	MakeName	(0x10b19180,	"a128And256Bytes");
	MakeName	(0x10b1919c,	"a256And512Bytes");
	MakeName	(0x10b191b8,	"a512And1kBytes");
//	MakeName	(0XFFFFFFFF,	"a1kAnd2kBytes");:0x10b191d4:0x10b191f0
//	MakeName	(0XFFFFFFFF,	"a2kAnd4kBytes");:0x10b191d4:0x10b191f0
	MakeName	(0x10b1920c,	"a4kAnd8kBytes");
	MakeName	(0x10b19228,	"a8kAnd16kBytes");
	MakeName	(0x10b19244,	"a16kAnd32kBytes");
	MakeName	(0x10b19260,	"a32kAnd64kBytes");
	MakeName	(0x10b1927c,	"a64kAnd128kByte");
	MakeName	(0x10b19298,	"a128kAnd256kByt");
	MakeName	(0x10b192b4,	"a256kBytes");
	MakeName	(0x10b1f80c,	"a35maxtitle");
	MakeName	(0x10b22270,	"a333333u333333u");
	MakeName	(0x10b25450,	"a333333u33333_1");
	MakeName	(0x10b26e68,	"a04d02d02d");
	MakeName	(0x10b2758c,	"a4u");
	MakeName	(0x10b27dec,	"a04lx");
	MakeName	(0x10b27df4,	"a4e00");
	MakeName	(0x10b27fe8,	"a_wav");
//	MakeName	(0XFFFFFFFF,	"a_0123456789Abc");:0x10b287c8:0x10b287c8
	MakeName	(0x10b2940c,	"a_htm");
	MakeName	(0x10b295c0,	"a20902OriginalU");
	MakeName	(0x10b295e4,	"a15442CombinedG");
	MakeName	(0x10b29608,	"a13061FullFormB");
	MakeName	(0x10b2962c,	"a6763SimpleForm");
	MakeName	(0x10b29650,	"a5411FullFormBi");
	MakeName	(0x10b29674,	"a3755SimpleForm");
	MakeName	(0x10b298e0,	"a01");
	MakeName	(0x10b298e4,	"a100_2");
	MakeName	(0x10b298e8,	"a101");
	MakeName	(0x10b29dac,	"a1st");
	MakeName	(0x10b29db0,	"a2nd");
	MakeName	(0x10b29db4,	"a3rd");
	MakeName	(0x10b29db8,	"a4th");
	MakeName	(0x10b29df4,	"a_60s_60s_60s");
	MakeName	(0x10b2a2d0,	"a_kernelfree_2");
	MakeName	(0x10b2a2f4,	"a_kernelalloc_2");
	MakeName	(0x10b2a328,	"a_kernelfree_3");
	MakeName	(0x10b2a334,	"a_deletemessage");
	MakeName	(0x10b2a348,	"a_kernelalloc_3");
	MakeName	(0x10b2a358,	"a_createmessage");
	MakeName	(0x10b2a36c,	"a4_4x");
	MakeName	(0x10b2a374,	"a2_2x_0");
	MakeName	(0x10b2b648,	"a100_1");
	MakeName	(0x10b2ba64,	"a0_00000");
	MakeName	(0x10b2bab0,	"a02d02dAt02d02d");
	MakeName	(0x10b2c210,	"a1_6");
//	MakeName	(0XFFFFFFFF,	"a0_5");:0xfffffff:0xfffffff
	MakeName	(0x10b2eed4,	"a201010221712");
	MakeName	(0x10b2f76c,	"a0_16");
	MakeName	(0x10b347bc,	"a201104131515");
	MakeName	(0x10bf96fc,	"a201111141718");
//	MakeName	(0XFFFFFFFF,	"a201111141719");:0x10c02444:0x10c0c3c4
//	MakeName	(0XFFFFFFFF,	"a201111141719_0");:0x10c02444:0x10c0c3c4
//	MakeName	(0XFFFFFFFF,	"a201111141720");:0x10c18824:0x10c26310
//	MakeName	(0XFFFFFFFF,	"a201111141720_0");:0x10c18824:0x10c26310
	MakeName	(0x10c3c3c0,	"a201201031513");
	MakeName	(0x10c6fe68,	"a201111141708");
	MakeName	(0x10c793e4,	"a201111141709");
//	MakeName	(0XFFFFFFFF,	"a201111141710");:0x10c83804:0x10c90564
//	MakeName	(0XFFFFFFFF,	"a201111141710_0");:0x10c83804:0x10c90564
//	MakeName	(0XFFFFFFFF,	"a201111141712");:0x10c9ec30:0x10cb62c0
//	MakeName	(0XFFFFFFFF,	"a201111141712_0");:0x10c9ec30:0x10cb62c0
//	MakeName	(0XFFFFFFFF,	"a201111141715");:0x10cebfd0:0x10da1ef4
//	MakeName	(0XFFFFFFFF,	"a201111141716");:0x10cf5e14:0x10d00e94
	MakeName	(0x10cfd2a0,	"a_K");
	MakeName	(0x10d00d10,	"a0_17");
//	MakeName	(0XFFFFFFFF,	"a201111141716_0");:0x10cf5e14:0x10d00e94
//	MakeName	(0XFFFFFFFF,	"a201111141717");:0x10d0e7c4:0x10d1d6e0
//	MakeName	(0XFFFFFFFF,	"a201111141717_0");:0x10d0e7c4:0x10d1d6e0
	MakeName	(0x10d359bc,	"a201201031516");
	MakeName	(0x10d4b624,	"a0_18");
//	MakeName	(0XFFFFFFFF,	"a201111141713");:0x10d6e324:0x10d78564
//	MakeName	(0XFFFFFFFF,	"a201111141713_0");:0x10d6e324:0x10d78564
//	MakeName	(0XFFFFFFFF,	"a201111141714");:0x10d83bc4:0x10d91f5c
//	MakeName	(0XFFFFFFFF,	"a201111141714_0");:0x10d83bc4:0x10d91f5c
//	MakeName	(0XFFFFFFFF,	"a201111141715_0");:0x10cebfd0:0x10da1ef4
	MakeName	(0x10dbb940,	"a201111141715_1");
	MakeName	(0x10df7908,	"a201111141735");
	MakeName	(0x10dfdd80,	"a201201311245");
	MakeName	(0x10e07160,	"a201111141732");
//	MakeName	(0XFFFFFFFF,	"a201111141733");:0x10e11db4:0x10e1f294
//	MakeName	(0XFFFFFFFF,	"a201111141733_0");:0x10e11db4:0x10e1f294
//	MakeName	(0XFFFFFFFF,	"a201111141733_1");:0x10e11db4:0x10e1f294
	MakeName	(0x10e4620c,	"a201111141734");
	MakeName	(0x10e7d1b0,	"a201111141721");
//	MakeName	(0XFFFFFFFF,	"a201111141723");:0x10e871b0:0x10e9259c
//	MakeName	(0XFFFFFFFF,	"a201111141723_0");:0x10e871b0:0x10e9259c
//	MakeName	(0XFFFFFFFF,	"a201111141724");:0x10ea03dc:0x10eaf3ec
//	MakeName	(0XFFFFFFFF,	"a201111141724_0");:0x10ea03dc:0x10eaf3ec
	MakeName	(0x10ec9494,	"a201111141725");
//	MakeName	(0XFFFFFFFF,	"a201111141729");:0x10f038a0:0x10f0e100
//	MakeName	(0XFFFFFFFF,	"a201111141729_0");:0x10f038a0:0x10f0e100
	MakeName	(0x10f1a2d8,	"a201201311243");
	MakeName	(0x10f28d70,	"a201111141730");
	MakeName	(0x10f38208,	"a201111141731");
	MakeName	(0x10f53d28,	"a201111141731_0");
	MakeName	(0x10f9118c,	"a201111141726");
//	MakeName	(0XFFFFFFFF,	"a201111141727");:0x10f9bdec:0x10fa83d8
//	MakeName	(0XFFFFFFFF,	"a201111141727_0");:0x10f9bdec:0x10fa83d8
//	MakeName	(0XFFFFFFFF,	"a201111141727_1");:0x10f9bdec:0x10fa83d8
	MakeName	(0x10fc8018,	"a201111141728");
	MakeName	(0x10fe4cf0,	"a201111141729_1");
	MakeName	(0x1102b694,	"keypad_type");
//	MakeName	(0XFFFFFFFF,	"a1Byte");:0x1103ca28:0x1103cc68
//	MakeName	(0XFFFFFFFF,	"a10Bytes");:0x1103ca70:0x1103ccb0
//	MakeName	(0XFFFFFFFF,	"a1Byte_0");:0x1103ca28:0x1103cc68
	MakeName	(0x110464b4,	"a112204112915");
//	MakeName	(0XFFFFFFFF,	"a_TpbhnaMtBgn9v");:0x110596f7:0x11085640
	MakeName	(0x11096744,	"a1mL2mL2mS5mL5m");
	MakeName	(0x1109677c,	"a7d7d7d7d7d7d_0");
	MakeName	(0x110ab5ec,	"a04x___");
	MakeName	(0x110ab5f4,	"a02x_1");
	MakeName	(0x110ab5fc,	"a02x_2");
	MakeName	(0x110d8024,	"a2_12");
	MakeName	(0x110d8032,	"a3_1");
	MakeName	(0x110d80c0,	"a4Nstep5");
	MakeName	(0x110dbd50,	"a3p6pPapfpgpgph");
	MakeName	(0x110dcc4c,	"a_02468Bdfhj");
//	MakeName	(0XFFFFFFFF,	"gui_gc_global_GC_ptr");:0x10000000:0x10000001
//	MakeName	(0XFFFFFFFF,	"stdin");:0x10000000:0x10000001
	MakeName	(0x1128DDF0,	"stdout");
	MakeName	(0x1128DE3C,	"stderr");

}
