// Function : create
// Namespace: hb_paint_extents_funcs_lazy_loader_t
// Entry    : 004641e0
// Prototype: undefined4 * create(void)
// Body     : 004641e0 - 0046474d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_paint_extents_funcs_lazy_loader_t::create() */

undefined4 * hb_paint_extents_funcs_lazy_loader_t::create(void)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  puVar4 = calloc(1,0x90);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)&_hb_Null_hb_paint_funcs_t;
    iVar1 = _DAT_00718bec;
  }
  else {
    *puVar4 = 1;
    puVar4[1] = 1;
    *(undefined8 *)(puVar4 + 2) = 0;
    puVar3 = PTR_hb_paint_custom_palette_color_nil_00718c60;
    *(undefined **)(puVar4 + 0x1c) = PTR_hb_paint_pop_group_nil_00718c58;
    *(undefined **)(puVar4 + 0x1e) = puVar3;
    puVar3 = PTR_hb_paint_push_group_nil_00718c50;
    *(undefined **)(puVar4 + 0x18) = PTR_hb_paint_sweep_gradient_nil_00718c48;
    *(undefined **)(puVar4 + 0x1a) = puVar3;
    puVar3 = PTR_hb_paint_radial_gradient_nil_00718c40;
    *(undefined **)(puVar4 + 0x14) = PTR_hb_paint_linear_gradient_nil_00718c38;
    *(undefined **)(puVar4 + 0x16) = puVar3;
    puVar3 = PTR_hb_paint_image_nil_00718c30;
    *(undefined **)(puVar4 + 0x10) = PTR_hb_paint_color_nil_00718c28;
    *(undefined **)(puVar4 + 0x12) = puVar3;
    puVar3 = PTR_hb_paint_pop_clip_nil_00718c20;
    *(undefined **)(puVar4 + 0xc) = PTR_hb_paint_push_clip_rectangle_nil_00718c18;
    *(undefined **)(puVar4 + 0xe) = puVar3;
    puVar3 = PTR_hb_paint_push_clip_glyph_nil_00718c10;
    *(undefined **)(puVar4 + 8) = PTR_hb_paint_color_glyph_nil_00718c08;
    *(undefined **)(puVar4 + 10) = puVar3;
    puVar3 = PTR_hb_paint_pop_transform_nil_00718c00;
    *(undefined **)(puVar4 + 4) = PTR_hb_paint_push_transform_nil_00718bf8;
    *(undefined **)(puVar4 + 6) = puVar3;
    iVar1 = puVar4[1];
  }
  if (iVar1 != 0) {
    if ((*(undefined8 **)(puVar4 + 0x22) != (undefined8 *)0x0) &&
       (pcVar2 = (code *)**(undefined8 **)(puVar4 + 0x22), pcVar2 != (code *)0x0)) {
      if (*(undefined8 **)(puVar4 + 0x20) == (undefined8 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = **(undefined8 **)(puVar4 + 0x20);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 4) = hb_paint_extents_push_transform;
    if (*(undefined8 **)(puVar4 + 0x20) != (undefined8 *)0x0) {
      **(undefined8 **)(puVar4 + 0x20) = 0;
    }
    if (*(undefined8 **)(puVar4 + 0x22) != (undefined8 *)0x0) {
      **(undefined8 **)(puVar4 + 0x22) = 0;
    }
  }
  if (puVar4[1] != 0) {
    if ((*(long *)(puVar4 + 0x22) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar4 + 0x22) + 8), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar4 + 0x20) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(puVar4 + 0x20) + 8);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 6) = hb_paint_extents_pop_transform;
    if (*(long *)(puVar4 + 0x20) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x20) + 8) = 0;
    }
    if (*(long *)(puVar4 + 0x22) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x22) + 8) = 0;
    }
  }
  if (puVar4[1] != 0) {
    if ((*(long *)(puVar4 + 0x22) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar4 + 0x22) + 0x18), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar4 + 0x20) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x18);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 10) = hb_paint_extents_push_clip_glyph;
    if (*(long *)(puVar4 + 0x20) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x18) = 0;
    }
    if (*(long *)(puVar4 + 0x22) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x22) + 0x18) = 0;
    }
  }
  if (puVar4[1] != 0) {
    if ((*(long *)(puVar4 + 0x22) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar4 + 0x22) + 0x20), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar4 + 0x20) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x20);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 0xc) = hb_paint_extents_push_clip_rectangle;
    if (*(long *)(puVar4 + 0x20) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x20) = 0;
    }
    if (*(long *)(puVar4 + 0x22) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x22) + 0x20) = 0;
    }
  }
  if (puVar4[1] != 0) {
    if ((*(long *)(puVar4 + 0x22) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar4 + 0x22) + 0x28), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar4 + 0x20) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x28);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 0xe) = hb_paint_extents_pop_clip;
    if (*(long *)(puVar4 + 0x20) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x28) = 0;
    }
    if (*(long *)(puVar4 + 0x22) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x22) + 0x28) = 0;
    }
  }
  if (puVar4[1] != 0) {
    if ((*(long *)(puVar4 + 0x22) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar4 + 0x22) + 0x58), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar4 + 0x20) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x58);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 0x1a) = hb_paint_extents_push_group;
    if (*(long *)(puVar4 + 0x20) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x58) = 0;
    }
    if (*(long *)(puVar4 + 0x22) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x22) + 0x58) = 0;
    }
  }
  if (puVar4[1] != 0) {
    if ((*(long *)(puVar4 + 0x22) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar4 + 0x22) + 0x60), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar4 + 0x20) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x60);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 0x1c) = hb_paint_extents_pop_group;
    if (*(long *)(puVar4 + 0x20) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x60) = 0;
    }
    if (*(long *)(puVar4 + 0x22) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x22) + 0x60) = 0;
    }
  }
  if (puVar4[1] != 0) {
    if ((*(long *)(puVar4 + 0x22) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar4 + 0x22) + 0x30), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar4 + 0x20) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x30);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 0x10) = hb_paint_extents_paint_color;
    if (*(long *)(puVar4 + 0x20) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x30) = 0;
    }
    if (*(long *)(puVar4 + 0x22) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x22) + 0x30) = 0;
    }
  }
  if (puVar4[1] != 0) {
    if ((*(long *)(puVar4 + 0x22) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar4 + 0x22) + 0x38), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar4 + 0x20) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x38);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 0x12) = hb_paint_extents_paint_image;
    if (*(long *)(puVar4 + 0x20) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x38) = 0;
    }
    if (*(long *)(puVar4 + 0x22) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x22) + 0x38) = 0;
    }
  }
  if (puVar4[1] != 0) {
    if ((*(long *)(puVar4 + 0x22) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar4 + 0x22) + 0x40), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar4 + 0x20) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x40);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 0x14) = hb_paint_extents_paint_linear_gradient;
    if (*(long *)(puVar4 + 0x20) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x40) = 0;
    }
    if (*(long *)(puVar4 + 0x22) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x22) + 0x40) = 0;
    }
  }
  if (puVar4[1] != 0) {
    if ((*(long *)(puVar4 + 0x22) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar4 + 0x22) + 0x48), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar4 + 0x20) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x48);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 0x16) = hb_paint_extents_paint_radial_gradient;
    if (*(long *)(puVar4 + 0x20) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x48) = 0;
    }
    if (*(long *)(puVar4 + 0x22) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x22) + 0x48) = 0;
    }
  }
  if (puVar4[1] != 0) {
    if ((*(long *)(puVar4 + 0x22) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar4 + 0x22) + 0x50), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar4 + 0x20) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x50);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 0x18) = hb_paint_extents_paint_sweep_gradient;
    if (*(long *)(puVar4 + 0x20) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x20) + 0x50) = 0;
    }
    if (*(long *)(puVar4 + 0x22) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x22) + 0x50) = 0;
    }
  }
  if (puVar4[1] != 0) {
    puVar4[1] = 0;
  }
  atexit(free_static_paint_extents_funcs);
  return puVar4;
}


