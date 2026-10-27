// Function : operator()
// Namespace: juce:createFittedText_juce__Font_const__juce__String_const__float_float_juce__Justification_int~e7ba35de:__70
// Entry    : 0032b390
// Prototype: undefined operator()(undefined4 param_1, $_70 * this, undefined8 * param_3)
// Body     : 0032b390 - 0032b9fa


/* juce::createFittedText(juce::Font const&, juce::String const&, float, float, juce::Justification,
   int, float, juce::detail::ShapedTextOptions)::$_70::TEMPNAMEPLACEHOLDERVALUE(float) const */

void __thiscall
juce::
createFittedText(juce::Font_const&,juce::String_const&,float,float,juce::Justification,int,float,juce::detail::ShapedTextOptions)
::$_70::operator()(undefined4 param_1,__70 *this,undefined8 *param_3)

{
  SharedFontInternal *pSVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  SharedFontInternal *pSVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  undefined4 *puVar9;
  SharedFontInternal *this_00;
  undefined4 *local_398;
  ulong local_390;
  undefined4 local_384;
  SharedFontInternal *local_380;
  undefined8 local_378 [5];
  void *local_350;
  long *local_338;
  long *local_330;
  long local_308;
  undefined8 local_300 [5];
  void *local_2d8;
  long *local_2c0;
  long *local_2b8;
  long local_290;
  undefined8 local_288 [5];
  void *local_260;
  long *local_248;
  long *local_240;
  long local_218;
  undefined8 local_210 [5];
  void *local_1e8;
  long *local_1d0;
  long *local_1c8;
  long local_1a0;
  undefined8 local_198 [5];
  void *local_170;
  long *local_158;
  long *local_150;
  long local_128;
  undefined8 local_120 [5];
  void *local_f8;
  long *local_e0;
  long *local_d8;
  long local_b0;
  undefined8 local_a8 [5];
  void *local_80;
  long *local_68;
  long *local_60;
  long local_38;
  
  local_390 = *(ulong *)*param_3;
  piVar8 = (int *)(local_390 - 0x10);
  if (piVar8 != &emptyString) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  puVar4 = (undefined8 *)param_3[1];
  pSVar5 = *(SharedFontInternal **)param_3[2];
  LOCK();
  *(int *)(pSVar5 + 8) = *(int *)(pSVar5 + 8) + 1;
  UNLOCK();
  local_384 = param_1;
  if (*(int *)(pSVar5 + 8) < 2) {
    this_00 = pSVar5;
  }
  else {
                    /* try { // try from 0032b3e7 to 0032b3f3 has its CatchHandler @ 0032b9fb */
    Font::SharedFontInternal::copy(&local_380,(long)pSVar5);
    this_00 = local_380;
    LOCK();
    pSVar1 = pSVar5 + 8;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    local_380 = pSVar5;
    if (*(int *)pSVar1 == 0) {
      (**(code **)(*(long *)pSVar5 + 8))(pSVar5);
    }
  }
                    /* try { // try from 0032b413 to 0032b420 has its CatchHandler @ 0032bae1 */
  Font::SharedFontInternal::setHorizontalScale(local_384,this_00);
  pthread_mutex_lock((pthread_mutex_t *)(this_00 + 0x80));
  plVar6 = *(long **)(this_00 + 0x10);
  *(undefined8 *)(this_00 + 0x10) = 0;
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this_00 + 0x80));
                    /* try { // try from 0032b456 to 0032b465 has its CatchHandler @ 0032badc */
  detail::ShapedTextOptions::withFont(local_378,puVar4,(long *)this_00);
                    /* try { // try from 0032b46e to 0032b47f has its CatchHandler @ 0032bad7 */
  detail::ShapedTextOptions::withWordWrapWidth(*(undefined4 *)param_3[3],local_300,local_378);
                    /* try { // try from 0032b488 to 0032b49c has its CatchHandler @ 0032bad2 */
  detail::ShapedTextOptions::withHeight(*(undefined4 *)param_3[4],local_288,local_300);
                    /* try { // try from 0032b4a4 to 0032b4b8 has its CatchHandler @ 0032bacd */
  detail::ShapedTextOptions::withMaxNumLines(local_210,local_288,(long)*(int *)param_3[5]);
                    /* try { // try from 0032b4bf to 0032b4d3 has its CatchHandler @ 0032ba60 */
  detail::ShapedTextOptions::withJustification
            ((undefined4 *)local_198,local_210,*(undefined4 *)param_3[6]);
                    /* try { // try from 0032b4d4 to 0032b4ed has its CatchHandler @ 0032ba4e */
  detail::ShapedTextOptions::withTrailingWhitespacesShouldFit(local_120,local_198,0);
                    /* try { // try from 0032b4ee to 0032b4f7 has its CatchHandler @ 0032ba3c */
  puVar9 = operator_new__(0x1b);
  LOCK();
  *puVar9 = 0;
  UNLOCK();
  *(undefined8 *)(puVar9 + 2) = 4;
  local_398 = puVar9 + 4;
  puVar9[4] = 0xa680e2;
                    /* try { // try from 0032b516 to 0032b52d has its CatchHandler @ 0032ba18 */
  detail::ShapedTextOptions::withEllipsis(local_a8,local_120,(long *)&local_398);
                    /* try { // try from 0032b52e to 0032b542 has its CatchHandler @ 0032ba06 */
  detail::ShapedText::ShapedText((ShapedText *)this,&local_390,(undefined1 (*) [16])local_a8);
  piVar8 = (int *)(local_38 + -0x10);
  plVar6 = local_68;
  if (piVar8 != &emptyString) {
    LOCK();
    iVar3 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar8);
      plVar6 = local_68;
    }
  }
  for (; plVar6 != local_60; plVar6 = plVar6 + 1) {
    plVar7 = (long *)*plVar6;
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  if (local_68 != (long *)0x0) {
    operator_delete(local_68);
  }
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
  piVar8 = local_398 + -4;
  if (piVar8 != &emptyString) {
    LOCK();
    iVar3 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar8);
    }
  }
  piVar8 = (int *)(local_b0 + -0x10);
  plVar6 = local_e0;
  if (piVar8 != &emptyString) {
    LOCK();
    iVar3 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar8);
      plVar6 = local_e0;
    }
  }
  for (; plVar6 != local_d8; plVar6 = plVar6 + 1) {
    plVar7 = (long *)*plVar6;
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  if (local_e0 != (long *)0x0) {
    operator_delete(local_e0);
  }
  if (local_f8 != (void *)0x0) {
    operator_delete(local_f8);
  }
  piVar8 = (int *)(local_128 + -0x10);
  plVar6 = local_158;
  if (piVar8 != &emptyString) {
    LOCK();
    iVar3 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar8);
      plVar6 = local_158;
    }
  }
  for (; plVar6 != local_150; plVar6 = plVar6 + 1) {
    plVar7 = (long *)*plVar6;
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  if (local_158 != (long *)0x0) {
    operator_delete(local_158);
  }
  if (local_170 != (void *)0x0) {
    operator_delete(local_170);
  }
  piVar8 = (int *)(local_1a0 + -0x10);
  plVar6 = local_1d0;
  if (piVar8 != &emptyString) {
    LOCK();
    iVar3 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar8);
      plVar6 = local_1d0;
    }
  }
  for (; plVar6 != local_1c8; plVar6 = plVar6 + 1) {
    plVar7 = (long *)*plVar6;
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  if (local_1d0 != (long *)0x0) {
    operator_delete(local_1d0);
  }
  if (local_1e8 != (void *)0x0) {
    operator_delete(local_1e8);
  }
  piVar8 = (int *)(local_218 + -0x10);
  plVar6 = local_248;
  if (piVar8 != &emptyString) {
    LOCK();
    iVar3 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar8);
      plVar6 = local_248;
    }
  }
  for (; plVar6 != local_240; plVar6 = plVar6 + 1) {
    plVar7 = (long *)*plVar6;
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  if (local_248 != (long *)0x0) {
    operator_delete(local_248);
  }
  if (local_260 != (void *)0x0) {
    operator_delete(local_260);
  }
  piVar8 = (int *)(local_290 + -0x10);
  plVar6 = local_2c0;
  if (piVar8 != &emptyString) {
    LOCK();
    iVar3 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar8);
      plVar6 = local_2c0;
    }
  }
  for (; plVar6 != local_2b8; plVar6 = plVar6 + 1) {
    plVar7 = (long *)*plVar6;
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  if (local_2c0 != (long *)0x0) {
    operator_delete(local_2c0);
  }
  if (local_2d8 != (void *)0x0) {
    operator_delete(local_2d8);
  }
  piVar8 = (int *)(local_308 + -0x10);
  plVar6 = local_338;
  if (piVar8 != &emptyString) {
    LOCK();
    iVar3 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar8);
      plVar6 = local_338;
    }
  }
  for (; plVar6 != local_330; plVar6 = plVar6 + 1) {
    plVar7 = (long *)*plVar6;
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  if (local_338 != (long *)0x0) {
    operator_delete(local_338);
  }
  if (local_350 != (void *)0x0) {
    operator_delete(local_350);
  }
  LOCK();
  pSVar5 = this_00 + 8;
  *(int *)pSVar5 = *(int *)pSVar5 + -1;
  UNLOCK();
  if (*(int *)pSVar5 == 0) {
    (**(code **)(*(long *)this_00 + 8))(this_00);
  }
  piVar8 = (int *)(local_390 - 0x10);
  if (piVar8 != &emptyString) {
    LOCK();
    iVar3 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar8);
    }
  }
  return;
}


