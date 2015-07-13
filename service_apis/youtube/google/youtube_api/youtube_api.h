// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.
// This code was generated by google-apis-code-generator 1.5.1
//   C++ generator version: 0.1.3

#ifndef  GOOGLE_YOUTUBE_API_YOUTUBE_API_H_
#define  GOOGLE_YOUTUBE_API_YOUTUBE_API_H_

#include "google/youtube_api/access_policy.h"
#include "google/youtube_api/resource_id.h"
#include "google/youtube_api/activity_content_details_bulletin.h"
#include "google/youtube_api/activity_content_details_channel_item.h"
#include "google/youtube_api/activity_content_details_comment.h"
#include "google/youtube_api/activity_content_details_favorite.h"
#include "google/youtube_api/activity_content_details_like.h"
#include "google/youtube_api/activity_content_details_playlist_item.h"
#include "google/youtube_api/activity_content_details_promoted_item.h"
#include "google/youtube_api/activity_content_details_recommendation.h"
#include "google/youtube_api/activity_content_details_social.h"
#include "google/youtube_api/activity_content_details_subscription.h"
#include "google/youtube_api/activity_content_details_upload.h"
#include "google/youtube_api/activity_content_details.h"
#include "google/youtube_api/thumbnail.h"
#include "google/youtube_api/thumbnail_details.h"
#include "google/youtube_api/activity_snippet.h"
#include "google/youtube_api/activity.h"
#include "google/youtube_api/page_info.h"
#include "google/youtube_api/token_pagination.h"
#include "google/youtube_api/activity_list_response.h"
#include "google/youtube_api/caption_snippet.h"
#include "google/youtube_api/caption.h"
#include "google/youtube_api/caption_list_response.h"
#include "google/youtube_api/ingestion_info.h"
#include "google/youtube_api/cdn_settings.h"
#include "google/youtube_api/channel_audit_details.h"
#include "google/youtube_api/channel_settings.h"
#include "google/youtube_api/property_value.h"
#include "google/youtube_api/language_tag.h"
#include "google/youtube_api/localized_string.h"
#include "google/youtube_api/localized_property.h"
#include "google/youtube_api/image_settings.h"
#include "google/youtube_api/watch_settings.h"
#include "google/youtube_api/channel_branding_settings.h"
#include "google/youtube_api/channel_content_details.h"
#include "google/youtube_api/channel_content_owner_details.h"
#include "google/youtube_api/channel_conversion_ping.h"
#include "google/youtube_api/channel_conversion_pings.h"
#include "google/youtube_api/invideo_timing.h"
#include "google/youtube_api/promoted_item_id.h"
#include "google/youtube_api/promoted_item.h"
#include "google/youtube_api/invideo_position.h"
#include "google/youtube_api/invideo_promotion.h"
#include "google/youtube_api/channel_localization.h"
#include "google/youtube_api/channel_snippet.h"
#include "google/youtube_api/channel_statistics.h"
#include "google/youtube_api/channel_status.h"
#include "google/youtube_api/channel_topic_details.h"
#include "google/youtube_api/channel.h"
#include "google/youtube_api/channel_banner_resource.h"
#include "google/youtube_api/channel_id.h"
#include "google/youtube_api/channel_list_response.h"
#include "google/youtube_api/channel_section_content_details.h"
#include "google/youtube_api/channel_section_localization.h"
#include "google/youtube_api/channel_section_snippet.h"
#include "google/youtube_api/channel_section_targeting.h"
#include "google/youtube_api/channel_section.h"
#include "google/youtube_api/channel_section_list_response.h"
#include "google/youtube_api/comment_snippet.h"
#include "google/youtube_api/comment.h"
#include "google/youtube_api/comment_list_response.h"
#include "google/youtube_api/comment_thread_replies.h"
#include "google/youtube_api/comment_thread_snippet.h"
#include "google/youtube_api/comment_thread.h"
#include "google/youtube_api/comment_thread_list_response.h"
#include "google/youtube_api/content_rating.h"
#include "google/youtube_api/geo_point.h"
#include "google/youtube_api/guide_category_snippet.h"
#include "google/youtube_api/guide_category.h"
#include "google/youtube_api/guide_category_list_response.h"
#include "google/youtube_api/i18n_language_snippet.h"
#include "google/youtube_api/i18n_language.h"
#include "google/youtube_api/i18n_language_list_response.h"
#include "google/youtube_api/i18n_region_snippet.h"
#include "google/youtube_api/i18n_region.h"
#include "google/youtube_api/i18n_region_list_response.h"
#include "google/youtube_api/invideo_branding.h"
#include "google/youtube_api/monitor_stream_info.h"
#include "google/youtube_api/live_broadcast_content_details.h"
#include "google/youtube_api/live_broadcast_snippet.h"
#include "google/youtube_api/live_broadcast_statistics.h"
#include "google/youtube_api/live_broadcast_status.h"
#include "google/youtube_api/live_broadcast_topic_snippet.h"
#include "google/youtube_api/live_broadcast_topic.h"
#include "google/youtube_api/live_broadcast_topic_details.h"
#include "google/youtube_api/live_broadcast.h"
#include "google/youtube_api/live_broadcast_list_response.h"
#include "google/youtube_api/live_stream_content_details.h"
#include "google/youtube_api/live_stream_snippet.h"
#include "google/youtube_api/live_stream_configuration_issue.h"
#include "google/youtube_api/live_stream_health_status.h"
#include "google/youtube_api/live_stream_status.h"
#include "google/youtube_api/live_stream.h"
#include "google/youtube_api/live_stream_list_response.h"
#include "google/youtube_api/playlist_content_details.h"
#include "google/youtube_api/playlist_localization.h"
#include "google/youtube_api/playlist_player.h"
#include "google/youtube_api/playlist_snippet.h"
#include "google/youtube_api/playlist_status.h"
#include "google/youtube_api/playlist.h"
#include "google/youtube_api/playlist_item_content_details.h"
#include "google/youtube_api/playlist_item_snippet.h"
#include "google/youtube_api/playlist_item_status.h"
#include "google/youtube_api/playlist_item.h"
#include "google/youtube_api/playlist_item_list_response.h"
#include "google/youtube_api/playlist_list_response.h"
#include "google/youtube_api/search_result_snippet.h"
#include "google/youtube_api/search_result.h"
#include "google/youtube_api/search_list_response.h"
#include "google/youtube_api/subscription_content_details.h"
#include "google/youtube_api/subscription_snippet.h"
#include "google/youtube_api/subscription_subscriber_snippet.h"
#include "google/youtube_api/subscription.h"
#include "google/youtube_api/subscription_list_response.h"
#include "google/youtube_api/thumbnail_set_response.h"
#include "google/youtube_api/video_age_gating.h"
#include "google/youtube_api/video_content_details_region_restriction.h"
#include "google/youtube_api/video_content_details.h"
#include "google/youtube_api/video_conversion_ping.h"
#include "google/youtube_api/video_conversion_pings.h"
#include "google/youtube_api/video_file_details_audio_stream.h"
#include "google/youtube_api/video_file_details_video_stream.h"
#include "google/youtube_api/video_file_details.h"
#include "google/youtube_api/video_live_streaming_details.h"
#include "google/youtube_api/video_localization.h"
#include "google/youtube_api/video_monetization_details.h"
#include "google/youtube_api/video_player.h"
#include "google/youtube_api/video_processing_details_processing_progress.h"
#include "google/youtube_api/video_processing_details.h"
#include "google/youtube_api/video_project_details.h"
#include "google/youtube_api/video_recording_details.h"
#include "google/youtube_api/video_snippet.h"
#include "google/youtube_api/video_statistics.h"
#include "google/youtube_api/video_status.h"
#include "google/youtube_api/video_suggestions_tag_suggestion.h"
#include "google/youtube_api/video_suggestions.h"
#include "google/youtube_api/video_topic_details.h"
#include "google/youtube_api/video.h"
#include "google/youtube_api/video_abuse_report.h"
#include "google/youtube_api/video_abuse_report_secondary_reason.h"
#include "google/youtube_api/video_abuse_report_reason_snippet.h"
#include "google/youtube_api/video_abuse_report_reason.h"
#include "google/youtube_api/video_abuse_report_reason_list_response.h"
#include "google/youtube_api/video_category_snippet.h"
#include "google/youtube_api/video_category.h"
#include "google/youtube_api/video_category_list_response.h"
#include "google/youtube_api/video_rating.h"
#include "google/youtube_api/video_get_rating_response.h"
#include "google/youtube_api/video_list_response.h"

#include "google/youtube_api/you_tube_service.h"


#endif  // GOOGLE_YOUTUBE_API_YOUTUBE_API_H_
