#include "pebble_os.h"
#include "pebble_app.h"
#include "pebble_fonts.h"

#define MY_UUID {0xA4, 0x1B, 0xB0, 0xE2, 0xD2, 0x62, 0x4E, 0xA6, 0xAA, 0x30, 0xED, 0xBE, 0x01, 0xE3, 0x8A, 0x02}
PBL_APP_INFO(MY_UUID, "Gothamic Beta", "Jim Christian", 0, 1 /* App version */, RESOURCE_ID_IMAGE_MENU_ICON, APP_INFO_WATCH_FACE);

Window window;

TextLayer text_date_layer;
TextLayer text_time_layer;

Layer line_layer;


void line_layer_update_callback(Layer *me, GContext* ctx) {
  (void)me;

  graphics_context_set_stroke_color(ctx, GColorWhite);

  graphics_draw_line(ctx, GPoint(6, 18), GPoint(49, 18));
  graphics_draw_line(ctx, GPoint(93, 18), GPoint(136, 18));
  
  graphics_draw_line(ctx, GPoint(8, 19), GPoint(49, 19));
  graphics_draw_line(ctx, GPoint(93, 19), GPoint(134, 19));
  
  graphics_draw_line(ctx, GPoint(10, 20), GPoint(50, 20));
  graphics_draw_line(ctx, GPoint(67, 20), GPoint(67, 20));
  graphics_draw_line(ctx, GPoint(75, 20), GPoint(75, 20));
  graphics_draw_line(ctx, GPoint(92, 20), GPoint(132, 20));
  
  graphics_draw_line(ctx, GPoint(12, 21), GPoint(50, 21));
  graphics_draw_line(ctx, GPoint(66, 21), GPoint(68, 21));
  graphics_draw_line(ctx, GPoint(74, 21), GPoint(76, 21));
  graphics_draw_line(ctx, GPoint(92, 21), GPoint(130, 21));
    
  graphics_draw_line(ctx, GPoint(14, 22), GPoint(50, 22));
  graphics_draw_line(ctx, GPoint(66, 22), GPoint(68, 22));
  graphics_draw_line(ctx, GPoint(74, 22), GPoint(76, 22));  
  graphics_draw_line(ctx, GPoint(92, 22), GPoint(128, 22));
    
  graphics_draw_line(ctx, GPoint(15, 23), GPoint(51, 23));
  graphics_draw_line(ctx, GPoint(66, 23), GPoint(68, 23));
  graphics_draw_line(ctx, GPoint(74, 23), GPoint(76, 23));  
  graphics_draw_line(ctx, GPoint(91, 23), GPoint(127, 23));
  
  graphics_draw_line(ctx, GPoint(17, 24), GPoint(52, 24));
  graphics_draw_line(ctx, GPoint(66, 24), GPoint(76, 24));
  graphics_draw_line(ctx, GPoint(90, 24), GPoint(125, 24));
  
  graphics_draw_line(ctx, GPoint(17, 24), GPoint(52, 24));
  graphics_draw_line(ctx, GPoint(66, 24), GPoint(76, 24));
  graphics_draw_line(ctx, GPoint(90, 24), GPoint(125, 24));
  
  graphics_draw_line(ctx, GPoint(18, 25), GPoint(53, 25));
  graphics_draw_line(ctx, GPoint(66, 25), GPoint(76, 25));
  graphics_draw_line(ctx, GPoint(89, 25), GPoint(124, 25));

  graphics_draw_line(ctx, GPoint(19, 26), GPoint(54, 26));
  graphics_draw_line(ctx, GPoint(66, 26), GPoint(76, 26));
  graphics_draw_line(ctx, GPoint(88, 26), GPoint(123, 26));

  graphics_draw_line(ctx, GPoint(20, 27), GPoint(59, 27));
  graphics_draw_line(ctx, GPoint(66, 27), GPoint(76, 27));
  graphics_draw_line(ctx, GPoint(83, 27), GPoint(122, 27));

  graphics_draw_line(ctx, GPoint(21, 28), GPoint(121, 28));
  graphics_draw_line(ctx, GPoint(22, 29), GPoint(120, 29));
  graphics_draw_line(ctx, GPoint(23, 30), GPoint(119, 30));
  graphics_draw_line(ctx, GPoint(23, 31), GPoint(119, 31));
  graphics_draw_line(ctx, GPoint(24, 32), GPoint(118, 32));
  graphics_draw_line(ctx, GPoint(24, 33), GPoint(118, 33));
  graphics_draw_line(ctx, GPoint(25, 34), GPoint(117, 34));
  graphics_draw_line(ctx, GPoint(25, 35), GPoint(117, 35));
  graphics_draw_line(ctx, GPoint(25, 36), GPoint(117, 36));
  graphics_draw_line(ctx, GPoint(25, 37), GPoint(117, 37));
  graphics_draw_line(ctx, GPoint(25, 38), GPoint(117, 38));
  graphics_draw_line(ctx, GPoint(25, 39), GPoint(117, 39));
  graphics_draw_line(ctx, GPoint(25, 40), GPoint(117, 40));
  graphics_draw_line(ctx, GPoint(25, 41), GPoint(117, 41));
  graphics_draw_line(ctx, GPoint(25, 42), GPoint(117, 42));
  graphics_draw_line(ctx, GPoint(25, 43), GPoint(117, 43));
  graphics_draw_line(ctx, GPoint(25, 44), GPoint(26, 44));
  graphics_draw_line(ctx, GPoint(41, 44), GPoint(100, 44));
  graphics_draw_line(ctx, GPoint(116, 44), GPoint(117, 44)); 
  graphics_draw_line(ctx, GPoint(48, 45), GPoint(94, 45));
  graphics_draw_line(ctx, GPoint(52, 46), GPoint(90, 46));
  graphics_draw_line(ctx, GPoint(55, 47), GPoint(86, 47));
  graphics_draw_line(ctx, GPoint(58, 48), GPoint(84, 48));
  graphics_draw_line(ctx, GPoint(60, 49), GPoint(82, 49));
  graphics_draw_line(ctx, GPoint(61, 50), GPoint(81, 50));
  graphics_draw_line(ctx, GPoint(63, 51), GPoint(79, 51));
  graphics_draw_line(ctx, GPoint(64, 52), GPoint(78, 52));
  graphics_draw_line(ctx, GPoint(65, 53), GPoint(77, 53));
  graphics_draw_line(ctx, GPoint(66, 54), GPoint(76, 54));
  graphics_draw_line(ctx, GPoint(67, 55), GPoint(75, 55));
  graphics_draw_line(ctx, GPoint(68, 56), GPoint(74, 56));
  graphics_draw_line(ctx, GPoint(68, 57), GPoint(74, 57));
  graphics_draw_line(ctx, GPoint(69, 58), GPoint(73, 58));
  graphics_draw_line(ctx, GPoint(69, 59), GPoint(73, 59));
  graphics_draw_line(ctx, GPoint(70, 60), GPoint(72, 60));
  graphics_draw_line(ctx, GPoint(70, 61), GPoint(72, 61));
  graphics_draw_line(ctx, GPoint(70, 62), GPoint(72, 62));
  
  // draw line between time and date

//  graphics_draw_line(ctx, GPoint(10, 123), GPoint(134, 123));
  graphics_draw_line(ctx, GPoint(10, 128), GPoint(134, 128));
  
  }

void handle_init(AppContextRef ctx) {
  (void)ctx;

  window_init(&window, "Gothamic");
  window_stack_push(&window, true /* Animated */);
  window_set_background_color(&window, GColorBlack);

  resource_init_current_app(&APP_RESOURCES);

// set the parameters for the date display
 text_layer_init(&text_date_layer, window.layer.frame);
 text_layer_set_text_color(&text_date_layer, GColorWhite);
 text_layer_set_background_color(&text_date_layer, GColorClear);
text_layer_set_text_alignment(&text_date_layer, GTextAlignmentCenter);
 layer_set_frame(&text_date_layer.layer, GRect(0, 132, 144-0, 168-132));
 text_layer_set_font(&text_date_layer, fonts_load_custom_font(resource_get_handle(RESOURCE_ID_FONT_ADVENTPRO_REGULAR_SUBSET_30)));
 layer_add_child(&window.layer, &text_date_layer.layer);

// set the parameters for the time display
  text_layer_init(&text_time_layer, window.layer.frame);
  text_layer_set_text_color(&text_time_layer, GColorWhite);
  text_layer_set_background_color(&text_time_layer, GColorClear);
  text_layer_set_text_alignment(&text_time_layer, GTextAlignmentCenter);
// layer_set_frame(&text_time_layer.layer, GRect(7, 92, 144-7, 168-92));
layer_set_frame(&text_time_layer.layer, GRect(0, 60, 144-0, 168-60));
text_layer_set_font(&text_time_layer, fonts_load_custom_font(resource_get_handle(RESOURCE_ID_FONT_ADVENTPRO_EXTRALIGHT_SUBSET_55)));

  layer_add_child(&window.layer, &text_time_layer.layer);


  layer_init(&line_layer, window.layer.frame);
  line_layer.update_proc = &line_layer_update_callback;
  layer_add_child(&window.layer, &line_layer);


  // TODO: Update display here to avoid blank display on launch?
}


void handle_minute_tick(AppContextRef ctx, PebbleTickEvent *t) {

  (void)ctx;

  // Need to be static because they're used by the system later.
  static char time_text[] = "00:00";
  static char date_text[] = "Xxxxxxxxx 00";

  char *time_format;


  // TODO: Only update the date when it's changed.
  string_format_time(date_text, sizeof(date_text), "%e %m %y", t->tick_time);
  text_layer_set_text(&text_date_layer, date_text);


  if (clock_is_24h_style()) {
    time_format = "%R";
  } else {
    time_format = "%I:%M";
  }

  string_format_time(time_text, sizeof(time_text), time_format, t->tick_time);

  // Kludge to handle lack of non-padded hour format string
  // for twelve hour clock.
  if (!clock_is_24h_style() && (time_text[0] == '0')) {
    memmove(time_text, &time_text[1], sizeof(time_text) - 1);
  }

  text_layer_set_text(&text_time_layer, time_text);

}


void pbl_main(void *params) {
  PebbleAppHandlers handlers = {
    .init_handler = &handle_init,

    .tick_info = {
      .tick_handler = &handle_minute_tick,
      .tick_units = MINUTE_UNIT
    }

  };
  app_event_loop(params, &handlers);
}
