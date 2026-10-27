// Function : configureNotify
// Namespace: juce:XEmbedComponent:Pimpl
// Entry    : 004d3a90
// Prototype: undefined configureNotify(Pimpl * this)
// Body     : 004d3a90 - 004d3d7d


/* juce::XEmbedComponent::Pimpl::configureNotify() */

void __thiscall juce::XEmbedComponent::Pimpl::configureNotify(Pimpl *this)

{
  char *pcVar1;
  undefined8 *puVar2;
  Component *this_00;
  bool bVar3;
  int iVar4;
  XWindowSystem *pXVar5;
  long lVar6;
  Desktop *pDVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  ulong uVar13;
  long *plVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 local_130 [8];
  int local_128;
  int local_124;
  undefined1 local_a8 [8];
  int local_a0;
  int local_9c;
  
  pXVar5 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                     ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                      XWindowSystem::singletonHolder);
  uVar8 = *(undefined8 *)(pXVar5 + 0x148);
  lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  iVar4 = (**(code **)(lVar6 + 0x1b0))(uVar8,*(undefined8 *)(this + 0x70),local_130);
  if (iVar4 == 0) {
    return;
  }
  lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  iVar4 = (**(code **)(lVar6 + 0x1b0))(uVar8,*(undefined8 *)(this + 0x78),local_a8);
  if ((iVar4 != 0) && ((local_128 != local_a0 || (local_124 != local_9c)))) {
    lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar6 + 0x298))(uVar8,*(undefined8 *)(this + 0x78),local_128,local_124);
  }
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar7 = operator_new(0x1d0);
                    /* try { // try from 004d3b3e to 004d3b45 has its CatchHandler @ 004d3d99 */
    Desktop::Desktop(pDVar7);
    Desktop::instance = pDVar7;
  }
  puVar2 = *(undefined8 **)(Desktop::instance + 0xe0);
  lVar6 = *(long *)(this + 8);
  do {
    if ((*(ushort *)(lVar6 + 0xe8) & 1) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 004d3b8a to 004d3b93 has its CatchHandler @ 004d3d91 */
        pDVar7 = operator_new(0x1d0);
                    /* try { // try from 004d3b97 to 004d3b9e has its CatchHandler @ 004d3d7e */
        Desktop::Desktop(pDVar7);
        iVar4 = *(int *)(pDVar7 + 0xdc);
        Desktop::instance = pDVar7;
      }
      else {
        iVar4 = *(int *)(Desktop::instance + 0xdc);
      }
      if ((long)iVar4 != 0) {
        lVar10 = 0;
        goto LAB_004d3bd0;
      }
      break;
    }
    lVar6 = *(long *)(lVar6 + 0x30);
  } while (lVar6 != 0);
  goto LAB_004d3be8;
  while (lVar10 = lVar10 + 8, (long)iVar4 * 8 != lVar10) {
LAB_004d3bd0:
    plVar14 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar10);
    if (plVar14[1] == lVar6) {
      dVar15 = (double)(**(code **)(*plVar14 + 0x130))(plVar14);
      bVar3 = false;
      uVar8 = detail::ComponentHelpers::convertCoordinate<juce::Point<int>>
                        ((long *)plVar14[1],*(long **)(this + 8),0);
      goto LAB_004d3d08;
    }
  }
LAB_004d3be8:
  pcVar11 = (char *)*puVar2;
  uVar13 = (long)*(int *)((long)puVar2 + 0xc) * 0x70;
  pcVar1 = pcVar11 + uVar13;
  if (0x150 < (long)uVar13) {
    lVar6 = uVar13 / 0x1c0 + 1;
    do {
      pcVar12 = pcVar11;
      if (*pcVar11 != '\0') goto LAB_004d3cef;
      if (pcVar11[0x70] != '\0') {
        pcVar12 = pcVar11 + 0x70;
        goto LAB_004d3cef;
      }
      if (pcVar11[0xe0] != '\0') {
        pcVar12 = pcVar11 + 0xe0;
        goto LAB_004d3cef;
      }
      if (pcVar11[0x150] != '\0') {
        pcVar12 = pcVar11 + 0x150;
        goto LAB_004d3cef;
      }
      pcVar11 = pcVar11 + 0x1c0;
      lVar6 = lVar6 + -1;
      uVar13 = uVar13 - 0x1c0;
    } while (1 < lVar6);
  }
  lVar6 = ((long)uVar13 >> 4) * 0x6db6db6db6db6db7;
  if (lVar6 != 1) {
    pcVar12 = pcVar11;
    if (lVar6 != 2) {
      pcVar12 = pcVar1;
      if ((lVar6 != 3) || (pcVar12 = pcVar11, *pcVar11 != '\0')) goto LAB_004d3cef;
      pcVar12 = pcVar11 + 0x70;
    }
    if (*pcVar12 != '\0') goto LAB_004d3cef;
    pcVar11 = pcVar12 + 0x70;
  }
  pcVar12 = pcVar11;
  if (*pcVar11 == '\0') {
    pcVar12 = pcVar1;
  }
LAB_004d3cef:
  plVar14 = (long *)0x0;
  if (pcVar12 == pcVar1) {
    pcVar12 = (char *)0x0;
  }
  dVar15 = *(double *)(pcVar12 + 0x50);
  uVar8 = *(undefined8 *)(*(long *)(this + 8) + 0x38);
  bVar3 = true;
LAB_004d3d08:
  uVar9 = CONCAT44((int)((double)local_124 / dVar15),(int)((double)local_128 / dVar15));
  auVar16._8_8_ = uVar9;
  auVar16._0_8_ = uVar8;
  if (!bVar3) {
    auVar16 = detail::ComponentHelpers::convertCoordinate<juce::Rectangle<int>>
                        (*(ComponentHelpers **)(this + 8),(ComponentHelpers *)plVar14[1],uVar8,uVar9
                        );
  }
  this_00 = *(Component **)(this + 8);
  if (((auVar16._0_8_ != 0) || (*(int *)(this_00 + 0x40) != auVar16._8_4_)) ||
     (*(int *)(this_00 + 0x44) != auVar16._12_4_)) {
    Component::setBounds
              (this_00,*(int *)(this_00 + 0x38),*(int *)(this_00 + 0x3c),auVar16._8_4_,
               auVar16._12_4_);
  }
  return;
}


