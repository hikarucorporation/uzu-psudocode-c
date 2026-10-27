// Function : attachResizableCornerComponent
// Namespace: juce:AudioProcessorEditor
// Entry    : 001be2d0
// Prototype: undefined attachResizableCornerComponent(undefined8 param_1, undefined8 param_2, undefined8 param_3, AudioProcessorEditor * this)
// Body     : 001be2d0 - 001be621


/* juce::AudioProcessorEditor::attachResizableCornerComponent() */

void __thiscall
juce::AudioProcessorEditor::attachResizableCornerComponent
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,AudioProcessorEditor *this)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  char cVar6;
  byte bVar7;
  Component *pCVar8;
  undefined8 *puVar9;
  Desktop *this_00;
  AudioProcessorEditor *pAVar10;
  long lVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  long local_28;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_20;
  
  pCVar8 = operator_new(0x110);
  uVar4 = *(undefined8 *)(this + 0x140);
  *(undefined1 **)(pCVar8 + 8) = &DAT_0061ac58;
  *(undefined1 **)(pCVar8 + 0x10) = &DAT_0061ac58;
  *(undefined1 **)(pCVar8 + 0x18) = &DAT_0061ac58;
  *(undefined1 **)(pCVar8 + 0x20) = &DAT_0061ac58;
  *(undefined1 **)(pCVar8 + 0x28) = &DAT_0061ac58;
  *(undefined8 *)(pCVar8 + 0xb0) = 0;
  *(undefined8 *)(pCVar8 + 0xb8) = 0;
  *(undefined8 *)(pCVar8 + 0xa0) = 0;
  *(undefined8 *)(pCVar8 + 0xa8) = 0;
  *(undefined8 *)(pCVar8 + 0x90) = 0;
  *(undefined8 *)(pCVar8 + 0x98) = 0;
  *(undefined8 *)(pCVar8 + 0x80) = 0;
  *(undefined8 *)(pCVar8 + 0x88) = 0;
  *(undefined8 *)(pCVar8 + 0x70) = 0;
  *(undefined8 *)(pCVar8 + 0x78) = 0;
  *(undefined8 *)(pCVar8 + 0x60) = 0;
  *(undefined8 *)(pCVar8 + 0x68) = 0;
  *(undefined8 *)(pCVar8 + 0x50) = 0;
  *(undefined8 *)(pCVar8 + 0x58) = 0;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  *(undefined8 *)(pCVar8 + 0x48) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = 0;
  *(undefined8 *)(pCVar8 + 0x38) = 0;
  *(undefined4 *)(pCVar8 + 0xc0) = 0;
  *(undefined8 *)(pCVar8 + 0xd8) = 0;
  *(undefined8 *)(pCVar8 + 0xe0) = 0;
  *(undefined8 *)(pCVar8 + 200) = 0;
  *(undefined8 *)(pCVar8 + 0xd0) = 0;
  *(undefined8 *)(pCVar8 + 0xe5) = 0;
  *(undefined ***)pCVar8 = &PTR__ResizableCornerComponent_00708a18;
  puVar9 = *(undefined8 **)(this + 0xd8);
  if (puVar9 == (undefined8 *)0x0) {
                    /* try { // try from 001be416 to 001be41f has its CatchHandler @ 001be63d */
    puVar9 = operator_new(0x18);
    *(undefined4 *)(puVar9 + 1) = 0;
    *puVar9 = &PTR__ReferenceCountedObject_00714b80;
    puVar9[2] = this;
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
    plVar5 = *(long **)(this + 0xd8);
    *(undefined8 **)(this + 0xd8) = puVar9;
    if (plVar5 == (long *)0x0) goto LAB_001be37b;
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
    puVar9 = *(undefined8 **)(this + 0xd8);
    *(undefined8 **)(pCVar8 + 0xf0) = puVar9;
    if (puVar9 != (undefined8 *)0x0) goto LAB_001be382;
  }
  else {
LAB_001be37b:
    *(undefined8 **)(pCVar8 + 0xf0) = puVar9;
LAB_001be382:
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
  }
  *(undefined8 *)(pCVar8 + 0xf8) = uVar4;
  *(undefined8 *)(pCVar8 + 0x100) = 0;
  *(undefined8 *)(pCVar8 + 0x108) = 0;
  pCVar8[0xe9] = (Component)((byte)pCVar8[0xe9] | 0x40);
                    /* try { // try from 001be39f to 001be3ab has its CatchHandler @ 001be64f */
  MouseCursor::SharedCursorHandle::createStandard
            (0,param_2,param_3,(SharedCursorHandle *)&local_28,0x13);
                    /* try { // try from 001be3b5 to 001be3bf has its CatchHandler @ 001be642 */
  Component::setMouseCursor
            (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,(long)pCVar8,local_28,
             local_20);
  if (local_20 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_001be49a:
    plVar5 = *(long **)(this + 0xf8);
    *(Component **)(this + 0xf8) = pCVar8;
  }
  else if (*(long *)(local_20 + 8) == 0x100000001) {
    *(undefined8 *)(local_20 + 8) = 0;
    (**(code **)(*(long *)local_20 + 0x10))(local_20);
    (**(code **)(*(long *)local_20 + 0x18))(local_20);
    plVar5 = *(long **)(this + 0xf8);
    *(Component **)(this + 0xf8) = pCVar8;
  }
  else {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var2 = local_20 + 8;
      iVar3 = *(int *)p_Var2;
      *(int *)p_Var2 = *(int *)p_Var2 + -1;
      UNLOCK();
    }
    else {
      iVar3 = (int)*(long *)(local_20 + 8);
      *(int *)(local_20 + 8) = iVar3 + -1;
    }
    if (iVar3 != 1) goto LAB_001be49a;
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_20);
    plVar5 = *(long **)(this + 0xf8);
    *(Component **)(this + 0xf8) = pCVar8;
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
    pCVar8 = *(Component **)(this + 0xf8);
  }
  Component::addChildComponent((Component *)this,pCVar8,0xffffffff);
  Component::setAlwaysOnTop(*(Component **)(this + 0xf8),1);
  pAVar10 = this;
  do {
    if ((*(ushort *)(pAVar10 + 0xe8) & 1) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001be517 to 001be520 has its CatchHandler @ 001be635 */
        this_00 = operator_new(0x1d0);
                    /* try { // try from 001be524 to 001be52b has its CatchHandler @ 001be622 */
        Desktop::Desktop(this_00);
        Desktop::instance = this_00;
      }
      bVar7 = 1;
      if ((long)*(int *)(Desktop::instance + 0xdc) == 0) goto LAB_001be57b;
      lVar11 = 0;
      goto LAB_001be550;
    }
    pAVar10 = *(AudioProcessorEditor **)(pAVar10 + 0x30);
  } while (pAVar10 != (AudioProcessorEditor *)0x0);
  bVar7 = 1;
  plVar5 = *(long **)(this + 0xf8);
joined_r0x001be612:
  if (plVar5 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar5 + 0x60))(plVar5,bVar7);
  Component::setBounds
            (*(Component **)(this + 0xf8),*(int *)(this + 0x40) + -0x12,
             *(int *)(this + 0x44) + -0x12,0x12,0x12);
  return;
  while (lVar11 = lVar11 + 8, (long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar11) {
LAB_001be550:
    plVar5 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar11);
    if ((AudioProcessorEditor *)plVar5[1] == pAVar10) {
      cVar6 = (**(code **)(*plVar5 + 0x90))(plVar5);
      if (cVar6 == '\0') {
        bVar7 = (**(code **)(*plVar5 + 0x98))(plVar5);
        bVar7 = bVar7 ^ 1;
        plVar5 = *(long **)(this + 0xf8);
        goto joined_r0x001be612;
      }
      bVar7 = 0;
      break;
    }
  }
LAB_001be57b:
  plVar5 = *(long **)(this + 0xf8);
  goto joined_r0x001be612;
}


