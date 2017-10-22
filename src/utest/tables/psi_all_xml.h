static const char psi_all_xml[] = 
    "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
    "<tsduck>\n"
    "  <PAT version=\"8\" current=\"true\" transport_stream_id=\"0x0012\" network_PID=\"0x0010\">\n"
    "    <service service_id=\"0x0001\" program_map_PID=\"0x1234\"/>\n"
    "    <service service_id=\"0x0002\" program_map_PID=\"0x0678\"/>\n"
    "  </PAT>\n"
    "  <CAT version=\"29\" current=\"true\">\n"
    "    <CA_descriptor CA_system_id=\"0x6789\" CA_PID=\"0x0123\">\n"
    "      <private_data>\n"
    "        01 02 03 04\n"
    "      </private_data>\n"
    "    </CA_descriptor>\n"
    "    <CA_descriptor CA_system_id=\"0x1234\" CA_PID=\"0x0124\">\n"
    "      <private_data>\n"
    "        11 12\n"
    "      </private_data>\n"
    "    </CA_descriptor>\n"
    "    <CA_descriptor CA_system_id=\"0x0777\" CA_PID=\"0x0125\"/>\n"
    "    <generic_descriptor tag=\"0x90\">\n"
    "      04 45 38 32\n"
    "    </generic_descriptor>\n"
    "  </CAT>\n"
    "  <PMT version=\"4\" current=\"true\" service_id=\"0x0456\" PCR_PID=\"0x1234\">\n"
    "    <CA_descriptor CA_system_id=\"0x0777\" CA_PID=\"0x0251\"/>\n"
    "    <component elementary_PID=\"0x0567\" stream_type=\"0x12\">\n"
    "      <ISO_639_language_descriptor>\n"
    "        <language code=\"fre\" audio_type=\"0x45\"/>\n"
    "        <language code=\"deu\" audio_type=\"0x78\"/>\n"
    "      </ISO_639_language_descriptor>\n"
    "      <T2MI_descriptor t2mi_stream_id=\"0x02\" num_t2mi_streams_minus_one=\"4\" pcr_iscr_common_clock_flag=\"true\">\n"
    "        <reserved>\n"
    "          01 02 03\n"
    "        </reserved>\n"
    "      </T2MI_descriptor>\n"
    "    </component>\n"
    "  </PMT>\n"
    "  <TSDT version=\"1\" current=\"false\">\n"
    "    <bouquet_name_descriptor bouquet_name=\"tsdt 1\"/>\n"
    "    <bouquet_name_descriptor bouquet_name=\"tsdt 2\"/>\n"
    "  </TSDT>\n"
    "  <NIT version=\"0\" current=\"true\" network_id=\"0x4589\" actual=\"true\">\n"
    "    <network_name_descriptor network_name=\"net 1\"/>\n"
    "    <transport_stream transport_stream_id=\"0x0014\" original_network_id=\"0x0282\">\n"
    "      <bouquet_name_descriptor bouquet_name=\"nit 11\"/>\n"
    "      <bouquet_name_descriptor bouquet_name=\"nit 12\"/>\n"
    "    </transport_stream>\n"
    "    <transport_stream transport_stream_id=\"0x1234\" original_network_id=\"0x0682\">\n"
    "      <bouquet_name_descriptor bouquet_name=\"nit 1\"/>\n"
    "      <bouquet_name_descriptor bouquet_name=\"nit 2\"/>\n"
    "    </transport_stream>\n"
    "  </NIT>\n"
    "  <NIT version=\"0\" current=\"true\" network_id=\"0x4589\" actual=\"false\">\n"
    "    <network_name_descriptor network_name=\"net 21\"/>\n"
    "    <AC3_descriptor component_type=\"0x2D\" bsid=\"0x07\" mainid=\"0x4E\" asvc=\"0x04\">\n"
    "      <additional_info>\n"
    "        01 02\n"
    "      </additional_info>\n"
    "    </AC3_descriptor>\n"
    "    <CA_identifier_descriptor>\n"
    "      <CA_system_id value=\"0x4567\"/>\n"
    "      <CA_system_id value=\"0x0565\"/>\n"
    "    </CA_identifier_descriptor>\n"
    "    <content_descriptor>\n"
    "      <content content_nibble_level_1=\"1\" content_nibble_level_2=\"3\" user_byte=\"0x45\"/>\n"
    "      <content content_nibble_level_1=\"2\" content_nibble_level_2=\"10\" user_byte=\"0x66\"/>\n"
    "    </content_descriptor>\n"
    "    <data_broadcast_descriptor data_broadcast_id=\"0x4567\" component_tag=\"0xAC\" language_code=\"xyz\">\n"
    "      <selector_bytes>\n"
    "        01 02 56 89\n"
    "      </selector_bytes>\n"
    "      <text>This is the text</text>\n"
    "    </data_broadcast_descriptor>\n"
    "    <data_broadcast_id_descriptor data_broadcast_id=\"0x786C\">\n"
    "      <selector_bytes>\n"
    "        01 89 65\n"
    "      </selector_bytes>\n"
    "    </data_broadcast_id_descriptor>\n"
    "    <private_data_specifier_descriptor private_data_specifier=\"eacem\"/>\n"
    "    <eacem_stream_identifier_descriptor version_byte=\"0x78\"/>\n"
    "    <enhanced_AC3_descriptor mixinfoexists=\"true\" component_type=\"0x43\" bsid=\"0x78\" mainid=\"0x68\" asvc=\"0x67\" substream1=\"0xB8\" substream2=\"0xC5\" substream3=\"0x45\">\n"
    "      <additional_info>\n"
    "        56 98 23 B8 CF\n"
    "      </additional_info>\n"
    "    </enhanced_AC3_descriptor>\n"
    "    <private_data_specifier_descriptor private_data_specifier=\"eutelsat\"/>\n"
    "    <eutelsat_channel_number_descriptor>\n"
    "      <service original_network_id=\"0x3494\" transport_stream_id=\"0xB674\" service_id=\"0x78BF\" eutelsat_channel_number=\"45\"/>\n"
    "      <service original_network_id=\"0x3784\" transport_stream_id=\"0xB623\" service_id=\"0x22BF\" eutelsat_channel_number=\"157\"/>\n"
    "    </eutelsat_channel_number_descriptor>\n"
    "    <extended_event_descriptor descriptor_number=\"1\" last_descriptor_number=\"4\" language_code=\"egg\">\n"
    "      <text>The text</text>\n"
    "      <item>\n"
    "        <description>Desc 1</description>\n"
    "        <name>Name 1</name>\n"
    "      </item>\n"
    "      <item>\n"
    "        <description>Desc 2</description>\n"
    "        <name>Name 2</name>\n"
    "      </item>\n"
    "    </extended_event_descriptor>\n"
    "    <private_data_specifier_descriptor private_data_specifier=\"eacem\"/>\n"
    "    <HD_simulcast_logical_channel_descriptor>\n"
    "      <service service_id=\"0x9687\" logical_channel_number=\"78\" visible_service=\"true\"/>\n"
    "      <service service_id=\"0x9877\" logical_channel_number=\"12\" visible_service=\"false\"/>\n"
    "    </HD_simulcast_logical_channel_descriptor>\n"
    "    <logical_channel_number_descriptor>\n"
    "      <service service_id=\"0xBF46\" logical_channel_number=\"45\" visible_service=\"true\"/>\n"
    "      <service service_id=\"0x2195\" logical_channel_number=\"789\" visible_service=\"false\"/>\n"
    "    </logical_channel_number_descriptor>\n"
    "    <linkage_descriptor transport_stream_id=\"0x1345\" original_network_id=\"0x987F\" service_id=\"0xCDFE\" linkage_type=\"0x08\">\n"
    "      <mobile_handover_info handover_type=\"0x02\" origin_type=\"NIT\" network_id=\"0x3434\" initial_service_id=\"0x8764\"/>\n"
    "      <private_data>\n"
    "        01 45 E8 45\n"
    "      </private_data>\n"
    "    </linkage_descriptor>\n"
    "    <linkage_descriptor transport_stream_id=\"0x1345\" original_network_id=\"0x987F\" service_id=\"0xCDFE\" linkage_type=\"0x0D\">\n"
    "      <event_linkage_info target_event_id=\"0x3444\" target_listed=\"true\" event_simulcast=\"false\"/>\n"
    "    </linkage_descriptor>\n"
    "    <linkage_descriptor transport_stream_id=\"0x1545\" original_network_id=\"0x987F\" service_id=\"0xC1FE\" linkage_type=\"0x0F\">\n"
    "      <extended_event_linkage_info>\n"
    "        <event target_event_id=\"0x1234\" target_listed=\"true\" event_simulcast=\"false\" link_type=\"0x01\" target_id_type=\"0x03\" user_defined_id=\"0x3445\" target_original_network_id=\"0x8764\" target_service_id=\"0x6742\"/>\n"
    "        <event target_event_id=\"0x7634\" target_listed=\"false\" event_simulcast=\"true\" link_type=\"0x01\" target_id_type=\"0x01\" target_transport_stream_id=\"0x8764\"/>\n"
    "      </extended_event_linkage_info>\n"
    "      <private_data>\n"
    "        01 45 E8\n"
    "      </private_data>\n"
    "    </linkage_descriptor>\n"
    "    <message_descriptor message_id=\"0x67\" language_code=\"zaf\">\n"
    "      <text>The message</text>\n"
    "    </message_descriptor>\n"
    "    <parental_rating_descriptor>\n"
    "      <country country_code=\"qsd\" rating=\"0x22\"/>\n"
    "      <country country_code=\"ger\" rating=\"0x07\"/>\n"
    "    </parental_rating_descriptor>\n"
    "    <private_data_specifier_descriptor private_data_specifier=\"0x54654BD5\"/>\n"
    "    <S2_satellite_delivery_system_descriptor backwards_compatibility=\"false\" scrambling_sequence_index=\"0x00000074\" input_stream_identifier=\"0x45\"/>\n"
    "    <satellite_delivery_system_descriptor frequency=\"12,094,000,000\" orbital_position=\"19.2\" west_east_flag=\"east\" polarization=\"vertical\" roll_off=\"0.20\" modulation_system=\"DVB-S2\" modulation_type=\"8PSK\" symbol_rate=\"23,900,000\" FEC_inner=\"5/6\"/>\n"
    "    <service_descriptor service_type=\"0x65\" service_provider_name=\"Azerty\" service_name=\"The Service\"/>\n"
    "    <service_list_descriptor>\n"
    "      <service service_id=\"0x5461\" service_type=\"0x56\"/>\n"
    "      <service service_id=\"0x0574\" service_type=\"0x12\"/>\n"
    "      <service service_id=\"0x2381\" service_type=\"0x78\"/>\n"
    "    </service_list_descriptor>\n"
    "    <short_event_descriptor language_code=\"egt\">\n"
    "      <event_name>The name</event_name>\n"
    "      <text>The text</text>\n"
    "    </short_event_descriptor>\n"
    "    <STD_descriptor leak_valid=\"true\"/>\n"
    "    <stream_identifier_descriptor component_tag=\"0x59\"/>\n"
    "    <subtitling_descriptor>\n"
    "      <subtitling language_code=\"rth\" subtitling_type=\"0x65\" composition_page_id=\"0x8921\" ancillary_page_id=\"0x6216\"/>\n"
    "      <subtitling language_code=\"gtf\" subtitling_type=\"0x61\" composition_page_id=\"0x1239\" ancillary_page_id=\"0x2139\"/>\n"
    "    </subtitling_descriptor>\n"
    "    <supplementary_audio_descriptor mix_type=\"1\" editorial_classification=\"0x06\" language_code=\"rtg\">\n"
    "      <private_data>\n"
    "        01 65 68 96 32\n"
    "      </private_data>\n"
    "    </supplementary_audio_descriptor>\n"
    "    <teletext_descriptor>\n"
    "      <teletext language_code=\"ezg\" teletext_type=\"0x12\" page_number=\"889\"/>\n"
    "      <teletext language_code=\"reh\" teletext_type=\"0x04\" page_number=\"387\"/>\n"
    "    </teletext_descriptor>\n"
    "    <terrestrial_delivery_system_descriptor centre_frequency=\"841,465,000\" bandwidth=\"8MHz\" priority=\"LP\" no_time_slicing=\"true\" no_MPE_FEC=\"false\" constellation=\"64-QAM\" hierarchy_information=\"5\" code_rate_HP_stream=\"3/4\" code_rate_LP_stream=\"2/3\" guard_interval=\"1/16\" transmission_mode=\"8k\" other_frequency=\"false\"/>\n"
    "    <AVC_video_descriptor profile_idc=\"0x2D\" constraint_set0=\"true\" constraint_set1=\"false\" constraint_set2=\"true\" AVC_compatible_flags=\"0x17\" level_idc=\"0x4E\" AVC_still_present=\"true\" AVC_24_hour_picture=\"false\"/>\n"
    "    <transport_stream transport_stream_id=\"0x6543\" original_network_id=\"0x9876\">\n"
    "      <bouquet_name_descriptor bouquet_name=\"nit 21\"/>\n"
    "      <bouquet_name_descriptor bouquet_name=\"nit 22\"/>\n"
    "    </transport_stream>\n"
    "  </NIT>\n"
    "  <BAT version=\"19\" current=\"false\" bouquet_id=\"0x921A\">\n"
    "    <bouquet_name_descriptor bouquet_name=\"bat 31\"/>\n"
    "    <transport_stream transport_stream_id=\"0x9823\" original_network_id=\"0x0018\">\n"
    "      <bouquet_name_descriptor bouquet_name=\"bat 41\"/>\n"
    "    </transport_stream>\n"
    "    <transport_stream transport_stream_id=\"0x9893\" original_network_id=\"0x9818\">\n"
    "      <bouquet_name_descriptor bouquet_name=\"bat 51\"/>\n"
    "    </transport_stream>\n"
    "  </BAT>\n"
    "  <RST>\n"
    "    <event transport_stream_id=\"0x1238\" original_network_id=\"0x5493\" service_id=\"0x5634\" event_id=\"0xA673\" running_status=\"starting\"/>\n"
    "    <event transport_stream_id=\"0x1658\" original_network_id=\"0x4663\" service_id=\"0x8634\" event_id=\"0xA273\" running_status=\"not-running\"/>\n"
    "    <event transport_stream_id=\"0x1269\" original_network_id=\"0x3543\" service_id=\"0x5656\" event_id=\"0x4573\" running_status=\"running\"/>\n"
    "  </RST>\n"
    "  <SDT version=\"2\" current=\"true\" transport_stream_id=\"0x7896\" original_network_id=\"0x46AC\" actual=\"true\">\n"
    "    <service service_id=\"0x4659\" EIT_schedule=\"false\" EIT_present_following=\"true\" CA_mode=\"false\" running_status=\"undefined\">\n"
    "      <country_availability_descriptor country_availability=\"true\">\n"
    "        <country country_code=\"abc\"/>\n"
    "        <country country_code=\"def\"/>\n"
    "      </country_availability_descriptor>\n"
    "      <country_availability_descriptor country_availability=\"false\">\n"
    "        <country country_code=\"xyz\"/>\n"
    "      </country_availability_descriptor>\n"
    "    </service>\n"
    "    <service service_id=\"0x46A9\" EIT_schedule=\"true\" EIT_present_following=\"false\" CA_mode=\"true\" running_status=\"pausing\">\n"
    "      <country_availability_descriptor country_availability=\"false\">\n"
    "        <country country_code=\"yui\"/>\n"
    "      </country_availability_descriptor>\n"
    "    </service>\n"
    "  </SDT>\n"
    "  <TDT UTC_time=\"2017-09-12 14:27:12\"/>\n"
    "  <TOT UTC_time=\"2017-09-12 14:28:10\">\n"
    "    <local_time_offset_descriptor>\n"
    "      <region country_code=\"abc\" country_region_id=\"1\" local_time_offset=\"-120\" time_of_change=\"2018-03-07 02:00:00\" next_time_offset=\"-60\"/>\n"
    "      <region country_code=\"erg\" country_region_id=\"17\" local_time_offset=\"120\" time_of_change=\"2018-03-07 04:00:00\" next_time_offset=\"90\"/>\n"
    "    </local_time_offset_descriptor>\n"
    "  </TOT>\n"
    "  <EIT type=\"pf\" version=\"2\" current=\"true\" actual=\"true\" service_id=\"0x0234\" transport_stream_id=\"0x4661\" original_network_id=\"0x621A\" segment_last_section_number=\"0x03\" last_table_id=\"0x4E\">\n"
    "    <event event_id=\"0x7684\" start_time=\"2017-09-21 14:28:30\" duration=\"01:47:44\" running_status=\"starting\" CA_mode=\"true\">\n"
    "      <short_event_descriptor language_code=\"egt\">\n"
    "        <event_name>Event name</event_name>\n"
    "        <text>Event description</text>\n"
    "      </short_event_descriptor>\n"
    "    </event>\n"
    "  </EIT>\n"
    "  <EIT type=\"8\" version=\"4\" current=\"true\" actual=\"false\" service_id=\"0x0666\" transport_stream_id=\"0x4693\" original_network_id=\"0x1268\" segment_last_section_number=\"0x12\" last_table_id=\"0x69\">\n"
    "    <event event_id=\"0x7684\" start_time=\"2017-09-21 14:28:30\" duration=\"01:47:44\" running_status=\"starting\" CA_mode=\"true\">\n"
    "      <short_event_descriptor language_code=\"egt\">\n"
    "        <event_name>Event name</event_name>\n"
    "        <text>Event description</text>\n"
    "      </short_event_descriptor>\n"
    "    </event>\n"
    "  </EIT>\n"
    "  <generic_short_table table_id=\"0xDE\" private=\"true\">\n"
    "    01 02 03 14 15 16 17 18 19 1A\n"
    "  </generic_short_table>\n"
    "  <generic_long_table table_id=\"0xC3\" table_id_ext=\"0x1234\" version=\"23\" current=\"true\" private=\"true\">\n"
    "    <section>\n"
    "      14 15 16 17 18 19 1A\n"
    "    </section>\n"
    "    <section>\n"
    "      24 25 26 27 48 59 6A 7B\n"
    "    </section>\n"
    "  </generic_long_table>\n"
    "</tsduck>\n";
