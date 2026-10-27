// Function : XWindowSystem
// Namespace: juce:XWindowSystem
// Entry    : 002c1430
// Prototype: undefined XWindowSystem(XWindowSystem * this)
// Body     : 002c1430 - 002c2165


/* juce::XWindowSystem::XWindowSystem() */

void __thiscall juce::XWindowSystem::XWindowSystem(XWindowSystem *this)

{
  XWindowSystem *pXVar1;
  int iVar2;
  code *pcVar3;
  default_delete<juce::XWindowSystemUtilities::XSettings> *this_00;
  void *pvVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  X11Symbols *this_01;
  ulong uVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  XWindowSystem *pXVar19;
  long *plVar20;
  int *piVar21;
  byte bVar22;
  size_t __n;
  byte *pbVar23;
  long lVar24;
  long lVar25;
  XWindowSystem **__src;
  byte *pbVar26;
  undefined2 local_1ca;
  byte *local_1c8;
  XWindowSystem *local_1c0;
  undefined8 local_1b8;
  code *local_1b0;
  code *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [72];
  undefined8 local_58;
  
  DeletedAtShutdown::DeletedAtShutdown((DeletedAtShutdown *)this);
  *(undefined ***)this = &PTR__XWindowSystem_00706fa8;
  this[8] = (XWindowSystem)0x0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(XWindowSystem **)(this + 0x178) = this + 0x168;
  *(XWindowSystem **)(this + 0x180) = this + 0x168;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x195) = 0;
  pbVar26 = &DAT_0061ac58;
  *(undefined1 **)(this + 0x1a0) = &DAT_0061ac58;
  *(undefined8 *)(this + 0x1a8) = 0;
                    /* try { // try from 002c14c6 to 002c1538 has its CatchHandler @ 002c21d9 */
  this_01 = (X11Symbols *)SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  uVar10 = X11Symbols::loadAllSymbols(this_01);
  this[8] = SUB81(uVar10,0);
  if (SUB81(uVar10,0) == (XWindowSystem)0x0) {
    return;
  }
  pbVar11 = (byte *)getenv("DISPLAY");
  if ((pbVar11 != (byte *)0x0) && (bVar22 = *pbVar11, bVar22 != 0)) {
    lVar25 = 0;
    pbVar26 = pbVar11;
    do {
      pbVar26 = pbVar26 + 1;
      lVar24 = lVar25 + (ulong)(bVar22 >> 7);
      lVar25 = lVar24 + 1;
      bVar22 = *pbVar26;
    } while (bVar22 != 0);
    uVar10 = lVar24 + 5U & 0xfffffffffffffffc;
    puVar12 = operator_new__(uVar10 + 0x17);
    LOCK();
    *puVar12 = 0;
    UNLOCK();
    *(ulong *)(puVar12 + 2) = uVar10;
    pbVar26 = (byte *)(puVar12 + 4);
    bVar22 = *pbVar11;
    pbVar13 = pbVar26;
    if (bVar22 != 0) {
      do {
        pbVar11 = pbVar11 + 1;
        if ((char)bVar22 < '\0') {
          *pbVar13 = bVar22 >> 6 | 0xc0;
          pbVar13[1] = bVar22 & 0x3f | 0x80;
          pbVar13 = pbVar13 + 1;
        }
        else {
          *pbVar13 = bVar22;
        }
        pbVar13 = pbVar13 + 1;
        bVar22 = *pbVar11;
      } while (bVar22 != 0);
    }
    *pbVar13 = 0;
  }
  if (*pbVar26 == 0) {
                    /* try { // try from 002c1f3b to 002c1f44 has its CatchHandler @ 002c2183 */
    puVar12 = operator_new__(0x1f);
    LOCK();
    *puVar12 = 0;
    UNLOCK();
    *(undefined8 *)(puVar12 + 2) = 8;
    pbVar11 = (byte *)(puVar12 + 4);
    puVar12[4] = 0x302e303a;
    *(undefined1 *)(puVar12 + 5) = 0;
    pbVar26 = pbVar26 + -0x10;
    if (pbVar26 != (byte *)&emptyString) {
      LOCK();
      iVar2 = *(int *)pbVar26;
      *(int *)pbVar26 = *(int *)pbVar26 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(pbVar26);
      }
    }
  }
  else {
    pbVar11 = pbVar26;
  }
                    /* try { // try from 002c159e to 002c15a2 has its CatchHandler @ 002c21bf */
  lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
                    /* try { // try from 002c15a3 to 002c15ab has its CatchHandler @ 002c21bd */
  lVar25 = (**(code **)(lVar25 + 0x240))(pbVar11);
  pXVar1 = this + 0x148;
  *(long *)pXVar1 = lVar25;
  if (lVar25 == 0) {
                    /* try { // try from 002c15bf to 002c15c3 has its CatchHandler @ 002c21bf */
    lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
                    /* try { // try from 002c15c4 to 002c15cc has its CatchHandler @ 002c21bd */
    lVar25 = (**(code **)(lVar25 + 0x240))(pbVar11);
    *(long *)pXVar1 = lVar25;
    if (lVar25 != 0) goto LAB_002c15dd;
LAB_002c2052:
    bVar5 = false;
    pbVar11 = pbVar11 + -0x10;
    bVar6 = false;
    if (pbVar11 == (byte *)&emptyString) goto LAB_002c207b;
  }
  else {
LAB_002c15dd:
                    /* try { // try from 002c15dd to 002c15ec has its CatchHandler @ 002c21c8 */
    local_1c8 = pbVar11;
    lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    windowHandleXContext = (**(code **)(lVar25 + 0x348))();
                    /* try { // try from 002c15f3 to 002c1604 has its CatchHandler @ 002c21c6 */
    lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar8 = (**(code **)(lVar25 + 0xb0))(*(long *)pXVar1);
                    /* try { // try from 002c1608 to 002c1639 has its CatchHandler @ 002c21ca */
    lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar14 = (**(code **)(lVar25 + 0x2a8))(*(long *)pXVar1,uVar8);
    lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar25 + 0x2c8))(*(long *)pXVar1,uVar14,0x80000);
    local_58 = 0;
                    /* try { // try from 002c1646 to 002c16bb has its CatchHandler @ 002c21de */
    lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    pcVar3 = *(code **)(lVar25 + 0xa0);
    lVar25 = *(long *)pXVar1;
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar15 = (**(code **)(lVar24 + 0xc0))(*(long *)pXVar1,uVar8);
    juce_messageWindowHandle = (*pcVar3)(lVar25,uVar14,0,0,1,1,0,0,2,uVar15,0x800,local_a0);
    lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar25 + 0x330))(*(long *)pXVar1,0);
    lVar25 = *(long *)pXVar1;
                    /* try { // try from 002c16c3 to 002c1b21 has its CatchHandler @ 002c21e0 */
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_a8 = (**(code **)(lVar24 + 0x1f0))(lVar25,"WM_PROTOCOLS",1);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_b0 = (**(code **)(lVar24 + 0x1f0))(lVar25,"WM_TAKE_FOCUS",1);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_b8 = (**(code **)(lVar24 + 0x1f0))(lVar25,"WM_DELETE_WINDOW",1);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_c0 = (**(code **)(lVar24 + 0x1f0))(lVar25,"_NET_WM_PING",1);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_c8 = (**(code **)(lVar24 + 0x1f0))(lVar25,"WM_CHANGE_STATE",1);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_d0 = (**(code **)(lVar24 + 0x1f0))(lVar25,"WM_STATE",1);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_d8 = (**(code **)(lVar24 + 0x1f0))(lVar25,"_NET_WM_USER_TIME",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_e0 = (**(code **)(lVar24 + 0x1f0))(lVar25,"_NET_ACTIVE_WINDOW",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_e8 = (**(code **)(lVar24 + 0x1f0))(lVar25,"_NET_WM_PID",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_f0 = (**(code **)(lVar24 + 0x1f0))(lVar25,"_NET_WM_WINDOW_TYPE",1);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_f8 = (**(code **)(lVar24 + 0x1f0))(lVar25,"_NET_WM_STATE",1);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_100 = (**(code **)(lVar24 + 0x1f0))(lVar25,"_NET_WM_STATE_HIDDEN",1);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_108 = (**(code **)(lVar24 + 0x1f0))(lVar25,"XdndAware",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_110 = (**(code **)(lVar24 + 0x1f0))(lVar25,"XdndEnter",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_118 = (**(code **)(lVar24 + 0x1f0))(lVar25,"XdndLeave",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_120 = (**(code **)(lVar24 + 0x1f0))(lVar25,"XdndPosition",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_128 = (**(code **)(lVar24 + 0x1f0))(lVar25,"XdndStatus",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_130 = (**(code **)(lVar24 + 0x1f0))(lVar25,"XdndDrop",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_138 = (**(code **)(lVar24 + 0x1f0))(lVar25,"XdndFinished",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_140 = (**(code **)(lVar24 + 0x1f0))(lVar25,"XdndSelection",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_148 = (**(code **)(lVar24 + 0x1f0))(lVar25,"XdndTypeList",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_150 = (**(code **)(lVar24 + 0x1f0))(lVar25,"XdndActionList",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_158 = (**(code **)(lVar24 + 0x1f0))(lVar25,"XdndActionCopy",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_160 = (**(code **)(lVar24 + 0x1f0))(lVar25,"XdndActionPrivate",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_168 = (**(code **)(lVar24 + 0x1f0))(lVar25,"XdndActionDescription",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_170 = (**(code **)(lVar24 + 0x1f0))(lVar25,"_XEMBED",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_178 = (**(code **)(lVar24 + 0x1f0))(lVar25,"_XEMBED_INFO",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_180 = (**(code **)(lVar24 + 0x1f0))(lVar25,"UTF8_STRING",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_188 = (**(code **)(lVar24 + 0x1f0))(lVar25,"text/plain;charset=utf-8",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_190 = (**(code **)(lVar24 + 0x1f0))(lVar25,"text/plain",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_198 = (**(code **)(lVar24 + 0x1f0))(lVar25,"text/uri-list",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_1a0 = (**(code **)(lVar24 + 0x1f0))(lVar25,"XdndActionMove",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar14 = (**(code **)(lVar24 + 0x1f0))(lVar25,"XdndActionLink",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar15 = (**(code **)(lVar24 + 0x1f0))(lVar25,"XdndActionAsk",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar16 = (**(code **)(lVar24 + 0x1f0))(lVar25,"UTF8_STRING",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar17 = (**(code **)(lVar24 + 0x1f0))(lVar25,"CLIPBOARD",0);
    lVar24 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar18 = (**(code **)(lVar24 + 0x1f0))(lVar25,"TARGETS",0);
    pbVar11 = local_1c8;
    *(undefined8 *)(this + 0x10) = local_a8;
    *(undefined8 *)(this + 0x18) = local_b0;
    *(undefined8 *)(this + 0x20) = local_b8;
    *(undefined8 *)(this + 0x28) = local_c0;
    *(undefined8 *)(this + 0x30) = local_c8;
    *(undefined8 *)(this + 0x38) = local_d0;
    *(undefined8 *)(this + 0x40) = local_d8;
    *(undefined8 *)(this + 0x48) = local_e0;
    *(undefined8 *)(this + 0x50) = local_e8;
    *(undefined8 *)(this + 0x58) = local_f0;
    *(undefined8 *)(this + 0x60) = local_f8;
    *(undefined8 *)(this + 0x68) = local_100;
    *(undefined8 *)(this + 0x70) = local_108;
    *(undefined8 *)(this + 0x78) = local_110;
    *(undefined8 *)(this + 0x80) = local_118;
    *(undefined8 *)(this + 0x88) = local_120;
    *(undefined8 *)(this + 0x90) = local_128;
    *(undefined8 *)(this + 0x98) = local_130;
    *(undefined8 *)(this + 0xa0) = local_138;
    *(undefined8 *)(this + 0xa8) = local_140;
    *(undefined8 *)(this + 0xb0) = local_148;
    *(undefined8 *)(this + 0xb8) = local_150;
    *(undefined8 *)(this + 0xc0) = local_168;
    *(undefined8 *)(this + 200) = local_158;
    *(undefined8 *)(this + 0xd0) = local_160;
    *(undefined8 *)(this + 0xd8) = local_170;
    *(undefined8 *)(this + 0xe0) = local_178;
    *(undefined8 *)(this + 0xe8) = local_1a0;
    *(undefined8 *)(this + 0xf0) = local_158;
    *(undefined8 *)(this + 0xf8) = uVar14;
    *(undefined8 *)(this + 0x100) = uVar15;
    *(undefined8 *)(this + 0x108) = local_160;
    *(undefined8 *)(this + 0x110) = local_180;
    *(undefined8 *)(this + 0x118) = local_188;
    *(undefined8 *)(this + 0x120) = local_190;
    *(undefined8 *)(this + 0x128) = local_198;
    *(undefined8 *)(this + 0x130) = uVar16;
    *(undefined8 *)(this + 0x138) = uVar17;
    *(undefined8 *)(this + 0x140) = uVar18;
                    /* try { // try from 002c1cee to 002c1d08 has its CatchHandler @ 002c21de */
    lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar9 = (**(code **)(lVar25 + 400))(*(long *)pXVar1,0,0);
    this[0x19c] = (XWindowSystem)0x0;
    *(undefined8 *)(this + 0x194) = 0;
    local_1ca = 0x301;
    local_1c0 = (XWindowSystem *)0x600000504030201;
    local_1b8 = CONCAT71(local_1b8._1_7_,7);
    if (0 < (int)uVar9) {
      __n = 9;
      if (uVar9 < 9) {
        __n = (size_t)uVar9;
      }
      __src = &local_1c0;
      if (uVar9 == 2) {
        __src = (XWindowSystem **)&local_1ca;
      }
      memcpy(this + 0x194,__src,__n);
    }
                    /* try { // try from 002c1d63 to 002c1de8 has its CatchHandler @ 002c21de */
    updateModifierMappings(this);
    XWindowSystemUtilities::XSettings::createXSettings((XSettings *)&local_1c0,*(long *)pXVar1);
    this_00 = *(default_delete<juce::XWindowSystemUtilities::XSettings> **)(this + 0x158);
    *(XWindowSystem **)(this + 0x158) = local_1c0;
    pXVar19 = local_1c0;
    if (this_00 != (default_delete<juce::XWindowSystemUtilities::XSettings> *)0x0) {
      std::default_delete<juce::XWindowSystemUtilities::XSettings>::operator()(this_00);
      pXVar19 = *(XWindowSystem **)(this + 0x158);
    }
    if (pXVar19 != (XWindowSystem *)0x0) {
      lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar25 + 0x2c8))
                (*(undefined8 *)(this + 0x148),*(undefined8 *)(*(long *)(this + 0x158) + 8),0x420000
                );
    }
    cVar7 = XSHMHelpers::isShmAvailable(*(long *)pXVar1);
    if (cVar7 != '\0') {
      lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      uVar8 = (**(code **)(lVar25 + 0x3f0))(*(long *)pXVar1);
      *(undefined4 *)(this + 400) = uVar8;
    }
                    /* try { // try from 002c1df2 to 002c1dfb has its CatchHandler @ 002c21bb */
    plVar20 = operator_new(0x18);
    lVar25 = *(long *)pXVar1;
    *plVar20 = 0;
    plVar20[1] = 0;
    plVar20[2] = 0;
                    /* try { // try from 002c1e15 to 002c1e8b has its CatchHandler @ 002c21cc */
    lVar24 = Visuals::findVisualWithDepth(lVar25,0x10);
    *plVar20 = lVar24;
    lVar24 = Visuals::findVisualWithDepth(lVar25,0x18);
    if (lVar24 == 0) {
      Visuals::findVisualWithDepth(lVar25,0x10);
    }
    plVar20[1] = lVar24;
    cVar7 = XSHMHelpers::isShmAvailable(lVar25);
    if ((cVar7 == '\0') || (lVar24 = Visuals::findVisualWithDepth(lVar25,0x20), lVar24 == 0)) {
      lVar24 = Visuals::findVisualWithDepth(lVar25,0x18);
      if (lVar24 == 0) {
        Visuals::findVisualWithDepth(lVar25,0x10);
      }
      lVar24 = 0;
    }
    plVar20[2] = lVar24;
    pvVar4 = *(void **)(this + 0x150);
    *(long **)(this + 0x150) = plVar20;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
      plVar20 = *(long **)(this + 0x150);
      lVar24 = plVar20[2];
    }
    if ((lVar24 == 0 && plVar20[1] == 0) && (*plVar20 == 0)) {
                    /* try { // try from 002c1f99 to 002c1fa2 has its CatchHandler @ 002c2181 */
      piVar21 = operator_new__(0x57);
      LOCK();
      *piVar21 = 0;
      UNLOCK();
      piVar21[2] = 0x40;
      piVar21[3] = 0;
      uVar10 = 0x45;
      lVar25 = 2;
      pbVar26 = (byte *)(piVar21 + 4);
      do {
        bVar22 = (byte)uVar10;
        if ((char)bVar22 < '\0') {
          *pbVar26 = (byte)(uVar10 >> 6) | 0xc0;
          pbVar26[1] = bVar22 & 0x3f | 0x80;
          pbVar23 = pbVar26 + 1;
          pbVar13 = pbVar26 + 2;
          bVar22 = "DISPLAY"[lVar25 + 7];
          pbVar26 = pbVar23;
          if (-1 < (char)bVar22) goto LAB_002c1ff4;
LAB_002c201b:
          pbVar23 = pbVar13;
          pbVar26[1] = bVar22 >> 6 | 0xc0;
          pbVar26[2] = bVar22 & 0x3f | 0x80;
        }
        else {
          *pbVar26 = bVar22;
          pbVar13 = pbVar26 + 1;
          bVar22 = "DISPLAY"[lVar25 + 7];
          pbVar23 = pbVar26;
          if ((char)bVar22 < '\0') goto LAB_002c201b;
LAB_002c1ff4:
          *pbVar13 = bVar22;
        }
        pbVar26 = pbVar23 + 2;
        uVar10 = (ulong)(byte)"ERROR: System doesn\'t support 32, 24 or 16 bit RGB display.\n"
                              [lVar25];
        lVar25 = lVar25 + 2;
      } while (lVar25 != 0x3e);
      *pbVar26 = 0;
                    /* try { // try from 002c2037 to 002c203b has its CatchHandler @ 002c2166 */
      Logger::outputDebugString((char *)(piVar21 + 4));
      LOCK();
      iVar2 = *piVar21;
      *piVar21 = *piVar21 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar21);
      }
      goto LAB_002c2052;
    }
                    /* try { // try from 002c1ec6 to 002c1ed4 has its CatchHandler @ 002c21de */
    lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar9 = (**(code **)(lVar25 + 0x58))(*(long *)pXVar1);
    local_1b8 = 0;
    local_1a8 = std::_Function_handler<void(int),juce::XWindowSystem::initialiseXDisplay()::$_8>::
                _M_invoke;
    local_1b0 = std::_Function_handler<void(int),juce::XWindowSystem::initialiseXDisplay()::$_8>::
                _M_manager;
                    /* try { // try from 002c1efb to 002c1f06 has its CatchHandler @ 002c2195 */
    local_1c0 = this;
    LinuxEventLoop::registerFdCallback(uVar9,&local_1c0);
    bVar5 = true;
    if (local_1b0 != (code *)0x0) {
                    /* try { // try from 002c1f13 to 002c1f21 has its CatchHandler @ 002c218d */
      (*local_1b0)(&local_1c0,&local_1c0,3);
    }
    pbVar11 = pbVar11 + -0x10;
    bVar6 = bVar5;
    if (pbVar11 == (byte *)&emptyString) goto LAB_002c207b;
  }
  bVar5 = bVar6;
  LOCK();
  iVar2 = *(int *)pbVar11;
  *(int *)pbVar11 = *(int *)pbVar11 + -1;
  UNLOCK();
  if (iVar2 == 0) {
    operator_delete__(pbVar11);
  }
LAB_002c207b:
  if (!bVar5) {
    pthread_mutex_lock((pthread_mutex_t *)X11Symbols::singletonHolder);
    uVar14 = X11Symbols::singletonHolder._40_8_;
    LOCK();
    X11Symbols::singletonHolder._40_8_ = 0;
    UNLOCK();
    if (uVar14 != 0) {
      LOCK();
      X11Symbols::singletonHolder._40_8_ = 0;
      UNLOCK();
      if (*(long *)(uVar14 + 0x428) != 0) {
        dlclose();
        *(undefined8 *)(uVar14 + 0x428) = 0;
      }
      if (*(long *)(uVar14 + 0x420) != 0) {
        dlclose();
        *(undefined8 *)(uVar14 + 0x420) = 0;
      }
      if (*(long *)(uVar14 + 0x418) != 0) {
        dlclose();
        *(undefined8 *)(uVar14 + 0x418) = 0;
      }
      if (*(long *)(uVar14 + 0x410) != 0) {
        dlclose();
        *(undefined8 *)(uVar14 + 0x410) = 0;
      }
      if (*(long *)(uVar14 + 0x408) != 0) {
        dlclose();
        *(undefined8 *)(uVar14 + 0x408) = 0;
      }
      operator_delete((void *)uVar14);
    }
    pthread_mutex_unlock((pthread_mutex_t *)X11Symbols::singletonHolder);
    this[8] = (XWindowSystem)0x0;
  }
  return;
}


