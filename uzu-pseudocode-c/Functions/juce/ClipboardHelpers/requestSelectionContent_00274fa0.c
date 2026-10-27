// Function : requestSelectionContent
// Namespace: juce:ClipboardHelpers
// Entry    : 00274fa0
// Prototype: ulong requestSelectionContent(long param_1, long * param_2, undefined8 param_3, undefined8 param_4)
// Body     : 00274fa0 - 00275256


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ClipboardHelpers::requestSelectionContent(_XDisplay*, juce::String&, unsigned long,
   unsigned long) */

ulong __cdecl
juce::ClipboardHelpers::requestSelectionContent
          (long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  XWindowSystem *pXVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong __n;
  ulong uVar10;
  bool bVar11;
  timespec local_128;
  ulong local_118 [3];
  int local_100 [2];
  undefined4 *local_f8;
  undefined1 local_f0 [32];
  undefined8 local_d0;
  long local_b8;
  
  lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  lVar2 = (**(code **)(lVar2 + 0x1f0))(param_1,"JUCE_SEL",0);
  lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar3 + 0x60))(param_1,param_3,param_4,lVar2,juce_messageWindowHandle,0);
  iVar7 = 0x31;
  do {
    lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar1 = (**(code **)(lVar3 + 0x38))(param_1,juce_messageWindowHandle,0x1f,local_f0);
    if (iVar1 != 0) {
      uVar10 = CONCAT71((int7)((ulong)local_f0 >> 8),local_b8 == lVar2);
      if (local_b8 == lVar2) {
        puVar8 = (undefined4 *)&DAT_0061ac58;
        if (param_1 != 0) {
          local_128.tv_sec = local_128.tv_sec & 0xffffffffffffff00;
          local_128.tv_nsec = 0;
          local_118[0] = 0;
          local_118[1] = 0;
          local_100[0] = -1;
          lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          iVar7 = (**(code **)(lVar3 + 0x1b8))
                            (param_1,local_d0,lVar2,0,100000,0,0,local_118 + 2,local_100,local_118,
                             local_118 + 1,&local_128.tv_nsec);
          uVar9 = local_118[2];
          local_128.tv_sec =
               CONCAT71(local_128.tv_sec._1_7_,
                        (byte *)local_128.tv_nsec != (byte *)0x0 && iVar7 == 0);
          bVar11 = true;
          if ((byte *)local_128.tv_nsec != (byte *)0x0 && iVar7 == 0) {
                    /* try { // try from 00275115 to 00275173 has its CatchHandler @ 00275257 */
            pXVar5 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                               ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                                XWindowSystem::singletonHolder);
            lVar2 = local_128.tv_nsec;
            if ((uVar9 == *(long *)(pXVar5 + 0x130)) && (local_100[0] == 8)) {
              puVar8 = (undefined4 *)&DAT_0061ac58;
              if (((byte *)local_128.tv_nsec != (byte *)0x0) && ((int)local_118[0] != 0)) {
                if ((int)local_118[0] < 0) {
                  local_f8 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>
                                       ((byte *)local_128.tv_nsec);
                  goto LAB_002751f1;
                }
                if (*(byte *)local_128.tv_nsec != 0) {
                  __n = local_118[0] & 0xffffffff;
                  uVar9 = __n + 4 & 0xfffffffffffffffc;
                  puVar6 = operator_new__(uVar9 + 0x17);
                  LOCK();
                  *puVar6 = 0;
                  UNLOCK();
                  *(ulong *)(puVar6 + 2) = uVar9;
                  puVar8 = puVar6 + 4;
                  memcpy(puVar8,(void *)lVar2,__n);
                  *(undefined1 *)((long)puVar6 + __n + 0x10) = 0;
                }
              }
              local_f8 = puVar8;
            }
            else {
              bVar11 = true;
              if ((local_118[2] != 0x1f) || (local_100[0] != 8)) goto LAB_002751f8;
                    /* try { // try from 002751d5 to 002751e8 has its CatchHandler @ 00275257 */
              juce::String::String((String *)&local_f8,(byte *)local_128.tv_nsec,local_118[0]);
            }
LAB_002751f1:
            bVar11 = false;
          }
LAB_002751f8:
          if ((byte *)local_128.tv_nsec != (byte *)0x0) {
                    /* try { // try from 002751fd to 0027520c has its CatchHandler @ 00275284 */
            lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
            (**(code **)(lVar2 + 0x128))(local_128.tv_nsec);
          }
          puVar8 = (undefined4 *)&DAT_0061ac58;
          if (!bVar11) {
            puVar8 = local_f8;
          }
        }
        local_f8 = (undefined4 *)*param_2;
        *param_2 = (long)puVar8;
        piVar4 = (int *)((long)local_f8 + -0x10);
        if (piVar4 != &emptyString) {
          LOCK();
          iVar7 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            operator_delete__(piVar4);
          }
        }
      }
      goto LAB_002751a7;
    }
    local_128.tv_sec = _DAT_005dd150;
    local_128.tv_nsec = (long)_UNK_005dd158;
    do {
      iVar1 = nanosleep(&local_128,&local_128);
      if (iVar1 != -1) break;
      piVar4 = __errno_location();
    } while (*piVar4 == 4);
    bVar11 = iVar7 != 0;
    iVar7 = iVar7 + -1;
  } while (bVar11);
  uVar10 = 0;
LAB_002751a7:
  return uVar10 & 0xffffffff;
}


