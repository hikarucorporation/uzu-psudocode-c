// Function : getPathDrawFuncs
// Namespace: juce
// Entry    : 00354fe0
// Prototype: undefined getPathDrawFuncs(void)
// Body     : 00354fe0 - 0035522f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::getPathDrawFuncs() */

void juce::getPathDrawFuncs(void)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  puVar4 = calloc(1,0x48);
  if (puVar4 == (undefined4 *)0x0) {
    getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs =
         (undefined4 *)&_hb_Null_hb_draw_funcs_t;
    puVar4 = getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs;
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
  getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs = puVar4;
  if (iVar1 != 0) {
    if ((*(undefined8 **)(puVar4 + 0x10) != (undefined8 *)0x0) &&
       (pcVar2 = (code *)**(undefined8 **)(puVar4 + 0x10), pcVar2 != (code *)0x0)) {
      if (*(undefined8 **)(puVar4 + 0xe) == (undefined8 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = **(undefined8 **)(puVar4 + 0xe);
      }
                    /* try { // try from 00355063 to 00355064 has its CatchHandler @ 00355238 */
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 4) =
         auto_juce::getPathDrawFuncs()::$_16::__invoke<hb_draw_funcs_t,hb_draw_state_t,void>;
    if (*(undefined8 **)(puVar4 + 0xe) != (undefined8 *)0x0) {
      **(undefined8 **)(puVar4 + 0xe) = 0;
    }
    if (*(undefined8 **)(puVar4 + 0x10) != (undefined8 *)0x0) {
      **(undefined8 **)(puVar4 + 0x10) = 0;
    }
  }
  puVar4 = getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs;
  if (getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs[1] != 0) {
    if ((*(long *)(getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs + 0x10) != 0) &&
       (pcVar2 = *(code **)(*(long *)(getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs +
                                     0x10) + 8), pcVar2 != (code *)0x0)) {
      if (*(long *)(getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs + 0xe) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)
                 (*(long *)(getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs + 0xe) + 8);
      }
                    /* try { // try from 003550c1 to 003550c2 has its CatchHandler @ 00355236 */
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 6) =
         auto_juce::getPathDrawFuncs()::$_17::__invoke<hb_draw_funcs_t,hb_draw_state_t,void>;
    if (*(long *)(puVar4 + 0xe) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0xe) + 8) = 0;
    }
    if (*(long *)(puVar4 + 0x10) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x10) + 8) = 0;
    }
  }
  puVar4 = getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs;
  if (getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs[1] != 0) {
    if ((*(long *)(getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs + 0x10) != 0) &&
       (pcVar2 = *(code **)(*(long *)(getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs +
                                     0x10) + 0x10), pcVar2 != (code *)0x0)) {
      if (*(long *)(getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs + 0xe) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)
                 (*(long *)(getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs + 0xe) + 0x10);
      }
                    /* try { // try from 00355121 to 00355122 has its CatchHandler @ 00355234 */
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 8) =
         auto_juce::getPathDrawFuncs()::$_18::__invoke<hb_draw_funcs_t,hb_draw_state_t,void>;
    if (*(long *)(puVar4 + 0xe) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0xe) + 0x10) = 0;
    }
    if (*(long *)(puVar4 + 0x10) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x10) + 0x10) = 0;
    }
  }
  puVar4 = getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs;
  if (getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs[1] != 0) {
    if ((*(long *)(getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs + 0x10) != 0) &&
       (pcVar2 = *(code **)(*(long *)(getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs +
                                     0x10) + 0x18), pcVar2 != (code *)0x0)) {
      if (*(long *)(getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs + 0xe) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)
                 (*(long *)(getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs + 0xe) + 0x18);
      }
                    /* try { // try from 00355181 to 00355182 has its CatchHandler @ 00355232 */
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 10) =
         auto_juce::getPathDrawFuncs()::$_19::__invoke<hb_draw_funcs_t,hb_draw_state_t,void>;
    if (*(long *)(puVar4 + 0xe) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0xe) + 0x18) = 0;
    }
    if (*(long *)(puVar4 + 0x10) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x10) + 0x18) = 0;
    }
  }
  puVar4 = getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs;
  if (getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs[1] != 0) {
    if ((*(long *)(getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs + 0x10) != 0) &&
       (pcVar2 = *(code **)(*(long *)(getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs +
                                     0x10) + 0x20), pcVar2 != (code *)0x0)) {
      if (*(long *)(getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs + 0xe) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)
                 (*(long *)(getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs + 0xe) + 0x20);
      }
                    /* try { // try from 003551e1 to 003551e2 has its CatchHandler @ 00355230 */
      (*pcVar2)(uVar5);
    }
    *(code **)(puVar4 + 0xc) =
         auto_juce::getPathDrawFuncs()::$_20::__invoke<hb_draw_funcs_t,hb_draw_state_t,void>;
    if (*(long *)(puVar4 + 0xe) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0xe) + 0x20) = 0;
    }
    if (*(long *)(puVar4 + 0x10) != 0) {
      *(undefined8 *)(*(long *)(puVar4 + 0x10) + 0x20) = 0;
    }
  }
  return;
}


