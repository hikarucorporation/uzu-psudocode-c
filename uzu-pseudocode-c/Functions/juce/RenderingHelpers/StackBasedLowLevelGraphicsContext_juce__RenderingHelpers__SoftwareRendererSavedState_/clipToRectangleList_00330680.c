// Function : clipToRectangleList
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00330680
// Prototype: bool clipToRectangleList(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this, long * param_1)
// Body     : 00330680 - 00330a11


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::clipToRectangleList(juce::RectangleList<int>
   const&) */

bool __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::
clipToRectangleList(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
                    *this,long *param_1)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  long *plVar5;
  void *__src;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  long *local_50;
  undefined1 local_48 [12];
  float fStack_3c;
  float fStack_38;
  
  plVar5 = *(long **)(this + 8);
  plVar8 = (long *)*plVar5;
  if (plVar8 == (long *)0x0) goto LAB_003309fb;
  if ((char)plVar5[5] == '\0') {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = (long *)0x0;
    uStack_90 = 0;
    local_78 = 1;
    if ((long)*(int *)((long)param_1 + 0xc) != 0) {
      puVar7 = (undefined8 *)*param_1;
      puVar12 = puVar7 + (long)*(int *)((long)param_1 + 0xc) * 2;
      do {
        Path::addRectangle((float)(int)*puVar7,(float)(int)((ulong)*puVar7 >> 0x20),
                           (float)(int)puVar7[1],(float)(int)((ulong)puVar7[1] >> 0x20),
                           (Path *)&local_98);
        puVar7 = puVar7 + 2;
      } while (puVar7 != puVar12);
    }
    local_48._4_8_ = 0;
    local_48._0_4_ = DAT_005d9038;
    fStack_3c = 0.0;
    fStack_38 = 1.0;
    plVar8 = (long *)*plVar5;
    if (plVar8 != (long *)0x0) {
      if (1 < (int)plVar8[1]) {
                    /* try { // try from 003307cb to 003307d2 has its CatchHandler @ 00330a12 */
        (**(code **)(*plVar8 + 0x10))(&local_68);
        plVar11 = (long *)*plVar5;
        *plVar5 = (long)local_68;
        plVar8 = local_68;
        if (plVar11 != (long *)0x0) {
          plVar1 = plVar11 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          if ((int)*plVar1 == 0) {
            local_68 = plVar11;
            (**(code **)(*plVar11 + 8))();
            plVar8 = (long *)*plVar5;
          }
        }
      }
      fVar15 = 0.0;
      if ((char)plVar5[5] == '\0') {
        fVar15 = *(float *)(plVar5 + 1);
        fVar13 = *(float *)((long)plVar5 + 0xc);
        local_60 = fVar15 * 0.0 + fVar13 * 0.0 + *(float *)(plVar5 + 2);
        fVar2 = *(float *)((long)plVar5 + 0x14);
        fVar3 = *(float *)(plVar5 + 3);
        fVar14 = fVar15 * _DAT_005dd3a0 + fVar13 * fStack_3c;
        fVar15 = fVar15 * _UNK_005dd3a4 + fVar13 * fStack_38;
        local_5c = fVar2 * _UNK_005dd3a8 + fVar3 * fStack_3c;
        local_58 = fVar2 * _UNK_005dd3ac + fVar3 * fStack_38;
        fVar13 = fVar2 * 0.0 + fVar3 * 0.0;
        local_54 = *(float *)((long)plVar5 + 0x1c);
      }
      else {
        local_60 = (float)(int)plVar5[4];
        fVar13 = (float)(int)((ulong)plVar5[4] >> 0x20);
        local_54 = 0.0;
        fVar14 = DAT_005d9038;
        local_5c = fStack_3c;
        local_58 = fStack_38;
      }
      local_54 = local_54 + fVar13;
      local_68 = (long *)CONCAT44(fVar15,fVar14);
                    /* try { // try from 003309b7 to 003309c6 has its CatchHandler @ 00330a12 */
      (**(code **)(*plVar8 + 0x38))(&local_50,plVar8,&local_98,&local_68);
      plVar8 = (long *)*plVar5;
      *plVar5 = (long)local_50;
      local_50 = plVar8;
      goto joined_r0x003309dc;
    }
  }
  else {
    if ((int)plVar8[1] < 2) {
LAB_003306ea:
      if ((int)plVar5[4] == 0 && *(int *)((long)plVar5 + 0x24) == 0) {
        (**(code **)(*(long *)*plVar5 + 0x28))(&local_98,(long *)*plVar5,param_1);
        plVar8 = (long *)*plVar5;
        *plVar5 = (long)local_98;
        if (plVar8 != (long *)0x0) {
          plVar11 = plVar8 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          if ((int)*plVar11 == 0) {
            local_98 = plVar8;
            (**(code **)(*plVar8 + 8))();
          }
        }
        goto LAB_003309fb;
      }
    }
    else {
      (**(code **)(*plVar8 + 0x10))(&local_98);
      plVar8 = (long *)*plVar5;
      *plVar5 = (long)local_98;
      local_98 = plVar8;
      if (plVar8 != (long *)0x0) {
        plVar11 = plVar8 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        if ((int)*plVar11 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
      if ((char)plVar5[5] != '\0') goto LAB_003306ea;
    }
    local_98 = (long *)0x0;
    uStack_90 = 0;
    uVar4 = *(uint *)((long)param_1 + 0xc);
    if ((long)(int)uVar4 < 1) {
      uStack_90 = (ulong)uVar4 << 0x20;
      if (uVar4 != 0) {
        plVar11 = (long *)((long)(int)uVar4 << 4);
        plVar8 = (long *)0x0;
        goto LAB_0033088b;
      }
    }
    else {
      __src = (void *)*param_1;
      uVar9 = uVar4 + (uVar4 >> 1) + 8;
      uVar10 = uVar9 & 0xfffffff8;
      if (0 < (int)uVar10) {
        local_98 = malloc((ulong)uVar10 << 4);
      }
      plVar8 = local_98;
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar9) & 0xfffffffffffffff8;
      memcpy(local_98,__src,(ulong)uVar4 * 0x10);
      uStack_90 = CONCAT44(uVar4,(undefined4)uStack_90);
      plVar11 = plVar8 + (ulong)uVar4 * 2;
LAB_0033088b:
      lVar6 = plVar5[4];
      do {
        *(int *)plVar8 = (int)*plVar8 + (int)lVar6;
        *(int *)((long)plVar8 + 4) = *(int *)((long)plVar8 + 4) + (int)((ulong)lVar6 >> 0x20);
        plVar8 = plVar8 + 2;
      } while (plVar8 != plVar11);
    }
                    /* try { // try from 003308b5 to 003308bf has its CatchHandler @ 00330a14 */
    (**(code **)(*(long *)*plVar5 + 0x28))(&local_68,(long *)*plVar5,&local_98);
    plVar8 = (long *)*plVar5;
    *plVar5 = (long)local_68;
    local_68 = plVar8;
joined_r0x003309dc:
    if (plVar8 != (long *)0x0) {
      plVar11 = plVar8 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      if ((int)*plVar11 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  uStack_90 = uStack_90 & 0xffffffff;
  free(local_98);
LAB_003309fb:
  return *plVar5 != 0;
}


