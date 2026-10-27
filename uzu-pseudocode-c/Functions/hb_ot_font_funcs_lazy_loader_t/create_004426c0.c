// Function : create
// Namespace: hb_ot_font_funcs_lazy_loader_t
// Entry    : 004426c0
// Prototype: undefined4 * create(void)
// Body     : 004426c0 - 00442bf4


/* hb_ot_font_funcs_lazy_loader_t::create() */

undefined4 * hb_ot_font_funcs_lazy_loader_t::create(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  puVar3 = calloc(1,0xb8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = &_hb_font_funcs_default;
    iVar1 = DAT_00718a74;
  }
  else {
    *puVar3 = 1;
    puVar3[1] = 1;
    *(undefined8 *)(puVar3 + 2) = 0;
    memcpy(puVar3 + 8,&PTR_hb_font_get_font_h_extents_default_00718a90,0x98);
    iVar1 = puVar3[1];
  }
  if (iVar1 != 0) {
    if ((*(long *)(puVar3 + 6) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar3 + 6) + 0x10), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar3 + 4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(puVar3 + 4) + 0x10);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(puVar3 + 0xc) = hb_ot_get_nominal_glyph;
    if (*(long *)(puVar3 + 4) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 4) + 0x10) = 0;
    }
    if (*(long *)(puVar3 + 6) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 6) + 0x10) = 0;
    }
  }
  if (puVar3[1] != 0) {
    if ((*(long *)(puVar3 + 6) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar3 + 6) + 0x18), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar3 + 4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(puVar3 + 4) + 0x18);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(puVar3 + 0xe) = hb_ot_get_nominal_glyphs;
    if (*(long *)(puVar3 + 4) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 4) + 0x18) = 0;
    }
    if (*(long *)(puVar3 + 6) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 6) + 0x18) = 0;
    }
  }
  if (puVar3[1] != 0) {
    if ((*(long *)(puVar3 + 6) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar3 + 6) + 0x20), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar3 + 4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(puVar3 + 4) + 0x20);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(puVar3 + 0x10) = hb_ot_get_variation_glyph;
    if (*(long *)(puVar3 + 4) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 4) + 0x20) = 0;
    }
    if (*(long *)(puVar3 + 6) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 6) + 0x20) = 0;
    }
  }
  if (puVar3[1] != 0) {
    if ((*(undefined8 **)(puVar3 + 6) != (undefined8 *)0x0) &&
       (pcVar2 = (code *)**(undefined8 **)(puVar3 + 6), pcVar2 != (code *)0x0)) {
      if (*(undefined8 **)(puVar3 + 4) == (undefined8 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = **(undefined8 **)(puVar3 + 4);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(puVar3 + 8) = hb_ot_get_font_h_extents;
    if (*(undefined8 **)(puVar3 + 4) != (undefined8 *)0x0) {
      **(undefined8 **)(puVar3 + 4) = 0;
    }
    if (*(undefined8 **)(puVar3 + 6) != (undefined8 *)0x0) {
      **(undefined8 **)(puVar3 + 6) = 0;
    }
  }
  if (puVar3[1] != 0) {
    if ((*(long *)(puVar3 + 6) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar3 + 6) + 0x38), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar3 + 4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(puVar3 + 4) + 0x38);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(puVar3 + 0x16) = hb_ot_get_glyph_h_advances;
    if (*(long *)(puVar3 + 4) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 4) + 0x38) = 0;
    }
    if (*(long *)(puVar3 + 6) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 6) + 0x38) = 0;
    }
  }
  if (puVar3[1] != 0) {
    if ((*(long *)(puVar3 + 6) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar3 + 6) + 8), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar3 + 4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(puVar3 + 4) + 8);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(puVar3 + 10) = hb_ot_get_font_v_extents;
    if (*(long *)(puVar3 + 4) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 4) + 8) = 0;
    }
    if (*(long *)(puVar3 + 6) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 6) + 8) = 0;
    }
  }
  if (puVar3[1] != 0) {
    if ((*(long *)(puVar3 + 6) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar3 + 6) + 0x40), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar3 + 4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(puVar3 + 4) + 0x40);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(puVar3 + 0x18) = hb_ot_get_glyph_v_advances;
    if (*(long *)(puVar3 + 4) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 4) + 0x40) = 0;
    }
    if (*(long *)(puVar3 + 6) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 6) + 0x40) = 0;
    }
  }
  if (puVar3[1] != 0) {
    if ((*(long *)(puVar3 + 6) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar3 + 6) + 0x50), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar3 + 4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(puVar3 + 4) + 0x50);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(puVar3 + 0x1c) = hb_ot_get_glyph_v_origin;
    if (*(long *)(puVar3 + 4) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 4) + 0x50) = 0;
    }
    if (*(long *)(puVar3 + 6) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 6) + 0x50) = 0;
    }
  }
  if (puVar3[1] != 0) {
    if ((*(long *)(puVar3 + 6) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar3 + 6) + 0x88), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar3 + 4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(puVar3 + 4) + 0x88);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(puVar3 + 0x2a) = hb_ot_draw_glyph;
    if (*(long *)(puVar3 + 4) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 4) + 0x88) = 0;
    }
    if (*(long *)(puVar3 + 6) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 6) + 0x88) = 0;
    }
  }
  if (puVar3[1] != 0) {
    if ((*(long *)(puVar3 + 6) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar3 + 6) + 0x90), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar3 + 4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(puVar3 + 4) + 0x90);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(puVar3 + 0x2c) = hb_ot_paint_glyph;
    if (*(long *)(puVar3 + 4) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 4) + 0x90) = 0;
    }
    if (*(long *)(puVar3 + 6) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 6) + 0x90) = 0;
    }
  }
  if (puVar3[1] != 0) {
    if ((*(long *)(puVar3 + 6) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar3 + 6) + 0x68), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar3 + 4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(puVar3 + 4) + 0x68);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(puVar3 + 0x22) = hb_ot_get_glyph_extents;
    if (*(long *)(puVar3 + 4) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 4) + 0x68) = 0;
    }
    if (*(long *)(puVar3 + 6) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 6) + 0x68) = 0;
    }
  }
  if (puVar3[1] != 0) {
    if ((*(long *)(puVar3 + 6) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar3 + 6) + 0x78), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar3 + 4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(puVar3 + 4) + 0x78);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(puVar3 + 0x26) = hb_ot_get_glyph_name;
    if (*(long *)(puVar3 + 4) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 4) + 0x78) = 0;
    }
    if (*(long *)(puVar3 + 6) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 6) + 0x78) = 0;
    }
  }
  if (puVar3[1] != 0) {
    if ((*(long *)(puVar3 + 6) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar3 + 6) + 0x80), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar3 + 4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(puVar3 + 4) + 0x80);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(puVar3 + 0x28) = hb_ot_get_glyph_from_name;
    if (*(long *)(puVar3 + 4) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 4) + 0x80) = 0;
    }
    if (*(long *)(puVar3 + 6) != 0) {
      *(undefined8 *)(*(long *)(puVar3 + 6) + 0x80) = 0;
    }
  }
  if (puVar3[1] != 0) {
    puVar3[1] = 0;
  }
  atexit(free_static_ot_funcs);
  return puVar3;
}


