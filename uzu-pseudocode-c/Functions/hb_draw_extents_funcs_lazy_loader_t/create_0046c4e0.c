// Function : create
// Namespace: hb_draw_extents_funcs_lazy_loader_t
// Entry    : 0046c4e0
// Prototype: undefined4 * create(void)
// Body     : 0046c4e0 - 0046c6c9


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_draw_extents_funcs_lazy_loader_t::create() */

undefined4 * hb_draw_extents_funcs_lazy_loader_t::create(void)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  puVar4 = calloc(1,0x48);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)&_hb_Null_hb_draw_funcs_t;
    iVar1 = _DAT_007187bc;
  }
  else {
    *puVar4 = 1;
    puVar4[1] = 1;
    *(undefined8 *)(puVar4 + 2) = 0;
    *(undefined **)(puVar4 + 0xc) = PTR_hb_draw_close_path_nil_007187e8;
    puVar3 = PTR_hb_draw_cubic_to_nil_007187e0;
    *(undefined **)(puVar4 + 8) = PTR_hb_draw_quadratic_to_nil_007187d8;
    *(undefined **)(puVar4 + 10) = puVar3;
    puVar3 = PTR_hb_draw_line_to_nil_007187d0;
    *(undefined **)(puVar4 + 4) = PTR_hb_draw_move_to_nil_007187c8;
    *(undefined **)(puVar4 + 6) = puVar3;
    iVar1 = puVar4[1];
  }
  if (iVar1 != 0) {
    if ((*(undefined8 **)(puVar4 + 0x10) != (undefined8 *)0x0) &&
       (pcVar2 = (code *)**(undefined8 **)(puVar4 + 0x10), pcVar2 != (code *)0x0)) {
      if (*(undefined8 **)(puVar4 + 0xe) == (undefined8 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = **(undefined8 **)(puVar4 + 0xe);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 4) = hb_draw_extents_move_to;
    if (*(undefined8 **)(puVar4 + 0xe) != (undefined8 *)0x0) {
      **(undefined8 **)(puVar4 + 0xe) = 0;
    }
    if (*(undefined8 **)(puVar4 + 0x10) != (undefined8 *)0x0) {
      **(undefined8 **)(puVar4 + 0x10) = 0;
    }
  }
  if (puVar4[1] != 0) {
    if ((*(long *)(puVar4 + 0x10) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar4 + 0x10) + 8), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar4 + 0xe) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(puVar4 + 0xe) + 8);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 6) = hb_draw_extents_line_to;
    if (*(long *)(puVar4 + 0xe) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0xe) + 8) = 0;
    }
    if (*(long *)(puVar4 + 0x10) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x10) + 8) = 0;
    }
  }
  if (puVar4[1] != 0) {
    if ((*(long *)(puVar4 + 0x10) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar4 + 0x10) + 0x10), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar4 + 0xe) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(puVar4 + 0xe) + 0x10);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 8) = hb_draw_extents_quadratic_to;
    if (*(long *)(puVar4 + 0xe) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0xe) + 0x10) = 0;
    }
    if (*(long *)(puVar4 + 0x10) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x10) + 0x10) = 0;
    }
  }
  if (puVar4[1] != 0) {
    if ((*(long *)(puVar4 + 0x10) != 0) &&
       (pcVar2 = *(code **)(*(long *)(puVar4 + 0x10) + 0x18), pcVar2 != (code *)0x0)) {
      if (*(long *)(puVar4 + 0xe) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(puVar4 + 0xe) + 0x18);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 10) = hb_draw_extents_cubic_to;
    if (*(long *)(puVar4 + 0xe) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0xe) + 0x18) = 0;
    }
    if (*(long *)(puVar4 + 0x10) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x10) + 0x18) = 0;
    }
  }
  if (puVar4[1] != 0) {
    puVar4[1] = 0;
  }
  atexit(free_static_draw_extents_funcs);
  return puVar4;
}


