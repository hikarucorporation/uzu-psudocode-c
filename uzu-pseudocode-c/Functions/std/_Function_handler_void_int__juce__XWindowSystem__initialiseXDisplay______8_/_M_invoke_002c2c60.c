// Function : _M_invoke
// Namespace: std:_Function_handler_void_int__juce__XWindowSystem__initialiseXDisplay______8_
// Entry    : 002c2c60
// Prototype: undefined _M_invoke(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, long * param_4)
// Body     : 002c2c60 - 002c34fc


/* WARNING: Removing unreachable block (ram,0x002c32ca) */
/* WARNING: Unknown calling convention: __cdecl */
/* std::_Function_handler<void (int),
   juce::XWindowSystem::initialiseXDisplay()::$_8>::_M_invoke(std::_Any_data const&, int&&) */

void __cdecl
std::_Function_handler<void(int),juce::XWindowSystem::initialiseXDisplay()::$_8>::_M_invoke
          (undefined8 param_1_00,long param_2,undefined8 param_3,long *param_4)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  XSettings *this;
  default_delete<juce::XWindowSystemUtilities::XSettings> *this_00;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  XWindowSystem *pXVar10;
  long *__ptr;
  byte *pbVar11;
  LinuxComponentPeer *pLVar12;
  Desktop *pDVar13;
  uint uVar14;
  byte *pbVar15;
  size_t __nmemb;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined8 uVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  long *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 local_120;
  long local_118;
  long lStack_110;
  long local_108;
  long local_100;
  undefined8 local_f8;
  int local_f0 [6];
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  undefined8 local_a8;
  
  lVar3 = *param_4;
  do {
    if ((juce::XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar9 = *(long *)(juce::XWindowSystem::singletonHolder._40_8_ + 0x148), lVar9 != 0)) {
      lVar8 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar8 + 0x210))(lVar9);
    }
                    /* try { // try from 002c2cd4 to 002c2d02 has its CatchHandler @ 002c354e */
    lVar9 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar6 = (**(code **)(lVar9 + 0x250))(*(undefined8 *)(lVar3 + 0x148));
    if (iVar6 == 0) {
      if (juce::XWindowSystem::singletonHolder._40_8_ == 0) {
        return;
      }
      lVar3 = *(long *)(juce::XWindowSystem::singletonHolder._40_8_ + 0x148);
      if (lVar3 == 0) {
        return;
      }
                    /* try { // try from 002c34dd to 002c34ea has its CatchHandler @ 002c3507 */
      lVar9 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar9 + 0x360))(lVar3);
      return;
    }
    lVar9 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar9 + 0x238))();
    if ((juce::XWindowSystem::singletonHolder._40_8_ != 0) &&
       (*(long *)(juce::XWindowSystem::singletonHolder._40_8_ + 0x148) != 0)) {
                    /* try { // try from 002c2d1b to 002c2d28 has its CatchHandler @ 002c3533 */
      lVar9 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar9 + 0x360))();
    }
    if ((local_f0[0] == 0x1e) && (local_d0 == juce::juce_messageWindowHandle)) {
      local_138 = 0x1f;
      local_120 = local_d8;
      local_118 = local_c8;
      lStack_110 = lStack_c0;
      local_108 = local_b8;
      local_100 = 0;
      local_f8 = local_a8;
                    /* try { // try from 002c2d8d to 002c2d9a has its CatchHandler @ 002c353b */
      pXVar10 = juce::SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                          ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                           juce::XWindowSystem::singletonHolder);
      if ((lStack_c0 == 1) || (lStack_c0 == *(long *)(pXVar10 + 0x138))) {
        if ((local_b8 == 0x1f) || (lVar9 = *(long *)(pXVar10 + 0x130), local_b8 == lVar9)) {
                    /* try { // try from 002c2dd4 to 002c2ddf has its CatchHandler @ 002c352c */
          pXVar10 = juce::SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                              ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                               juce::XWindowSystem::singletonHolder);
          pbVar19 = *(byte **)(pXVar10 + 0x1a0);
          pbVar1 = pbVar19 + -0x10;
          if (pbVar1 != (byte *)&juce::emptyString) {
            LOCK();
            *(int *)pbVar1 = *(int *)pbVar1 + 1;
            UNLOCK();
          }
          uVar18 = 0;
          pbVar20 = pbVar19;
          while( true ) {
            pbVar11 = pbVar20 + 1;
            bVar2 = *pbVar20;
            uVar14 = (uint)bVar2;
            if ((char)bVar2 < '\0') {
              if ((bVar2 & 0x40) == 0) {
                uVar14 = bVar2 & 0x7f;
              }
              else {
                if ((bVar2 & 0x20) == 0) {
                  uVar14 = 0x3f;
                  lVar9 = 0;
                  bVar4 = false;
                  bVar5 = false;
                }
                else {
                  bVar4 = true;
                  if ((bVar2 & 0x10) == 0) {
                    uVar14 = 0x1f;
                    lVar9 = 1;
                    bVar5 = false;
                  }
                  else {
                    uVar14 = 0xf;
                    lVar9 = 2;
                    bVar5 = true;
                  }
                }
                uVar14 = bVar2 & uVar14;
                if ((pbVar20[1] & 0xffffffc0) == 0x80) {
                  pbVar15 = pbVar20 + lVar9 + 2;
                  uVar14 = pbVar20[1] & 0x3f | uVar14 << 6;
                  pbVar11 = pbVar15;
                  if (bVar4) {
                    uVar16 = (uint)pbVar20[2];
                    pbVar11 = pbVar20 + 2;
                    if ((uVar16 & 0xffffffc0) == 0x80) {
                      uVar14 = uVar16 & 0x3f | uVar14 << 6;
                      pbVar11 = pbVar15;
                      if (bVar5) {
                        uVar16 = (uint)pbVar20[3];
                        pbVar11 = pbVar20 + 3;
                        if ((uVar16 & 0xffffffc0) == 0x80) {
                          uVar14 = uVar14 << 6 | uVar16 & 0x3f;
                          pbVar11 = pbVar15;
                        }
                      }
                    }
                  }
                }
              }
            }
            pbVar20 = pbVar11;
            if (uVar14 == 0) break;
            lVar9 = 1;
            if ((0x7f < uVar14) && (lVar9 = 2, 0x7ff < uVar14)) {
              lVar9 = 4 - (ulong)(uVar14 < 0x10000);
            }
            uVar18 = uVar18 + lVar9;
          }
          __nmemb = uVar18 + 1;
          if (__nmemb == 0) {
            do {
              pbVar20 = pbVar19 + 1;
              bVar2 = *pbVar19;
              uVar14 = (uint)bVar2;
              if ((char)bVar2 < '\0') {
                if ((bVar2 & 0x40) == 0) {
                  uVar14 = bVar2 & 0x7f;
                }
                else {
                  if ((bVar2 & 0x20) == 0) {
                    uVar14 = 0x3f;
                    lVar9 = 0;
                    bVar4 = false;
                    bVar5 = false;
                  }
                  else {
                    bVar4 = true;
                    if ((bVar2 & 0x10) == 0) {
                      uVar14 = 0x1f;
                      lVar9 = 1;
                      bVar5 = false;
                    }
                    else {
                      uVar14 = 0xf;
                      lVar9 = 2;
                      bVar5 = true;
                    }
                  }
                  uVar14 = bVar2 & uVar14;
                  if ((pbVar19[1] & 0xffffffc0) == 0x80) {
                    pbVar11 = pbVar19 + lVar9 + 2;
                    uVar14 = pbVar19[1] & 0x3f | uVar14 << 6;
                    pbVar20 = pbVar11;
                    if (bVar4) {
                      pbVar20 = pbVar19 + 2;
                      if ((*pbVar20 & 0xffffffc0) == 0x80) {
                        uVar14 = *pbVar20 & 0x3f | uVar14 << 6;
                        pbVar20 = pbVar11;
                        if (bVar5) {
                          pbVar20 = pbVar19 + 3;
                          if ((*pbVar20 & 0xffffffc0) == 0x80) {
                            uVar14 = uVar14 << 6 | *pbVar20 & 0x3f;
                            pbVar20 = pbVar11;
                          }
                        }
                      }
                    }
                  }
                }
              }
              pbVar19 = pbVar20;
            } while (uVar14 != 0);
LAB_002c31b9:
            __ptr = (long *)0x0;
          }
          else {
            __ptr = calloc(__nmemb,1);
            if (__ptr == (long *)0x0) {
              do {
                pbVar20 = pbVar19 + 1;
                bVar2 = *pbVar19;
                uVar14 = (uint)bVar2;
                if ((char)bVar2 < '\0') {
                  if ((bVar2 & 0x40) == 0) {
                    uVar14 = bVar2 & 0x7f;
                  }
                  else {
                    if ((bVar2 & 0x20) == 0) {
                      uVar14 = 0x3f;
                      lVar9 = 0;
                      bVar4 = false;
                      bVar5 = false;
                    }
                    else {
                      bVar4 = true;
                      if ((bVar2 & 0x10) == 0) {
                        uVar14 = 0x1f;
                        lVar9 = 1;
                        bVar5 = false;
                      }
                      else {
                        uVar14 = 0xf;
                        lVar9 = 2;
                        bVar5 = true;
                      }
                    }
                    uVar14 = bVar2 & uVar14;
                    if ((pbVar19[1] & 0xffffffc0) == 0x80) {
                      pbVar11 = pbVar19 + lVar9 + 2;
                      uVar14 = pbVar19[1] & 0x3f | uVar14 << 6;
                      pbVar20 = pbVar11;
                      if (bVar4) {
                        pbVar20 = pbVar19 + 2;
                        if ((*pbVar20 & 0xffffffc0) == 0x80) {
                          uVar14 = *pbVar20 & 0x3f | uVar14 << 6;
                          pbVar20 = pbVar11;
                          if (bVar5) {
                            pbVar20 = pbVar19 + 3;
                            if ((*pbVar20 & 0xffffffc0) == 0x80) {
                              uVar14 = uVar14 << 6 | *pbVar20 & 0x3f;
                              pbVar20 = pbVar11;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                pbVar19 = pbVar20;
              } while (uVar14 != 0);
              goto LAB_002c31b9;
            }
            local_140 = __ptr;
            juce::CharacterFunctions::
            copyWithDestByteLimit<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      ((long *)&local_140,pbVar19,__nmemb);
          }
          if (pbVar1 != (byte *)&juce::emptyString) {
            LOCK();
            iVar6 = *(int *)pbVar1;
            *(int *)pbVar1 = *(int *)pbVar1 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              operator_delete__(pbVar1);
            }
          }
          if (__ptr == (long *)0x0) goto LAB_002c3430;
          uVar21 = 8;
          if (uVar18 < 1000000) goto LAB_002c31fa;
        }
        else {
          if (local_b8 != *(long *)(pXVar10 + 0x140)) goto LAB_002c3430;
          __ptr = calloc(0x10,1);
          *__ptr = lVar9;
          __ptr[1] = 0x1f;
          local_b8 = 4;
          uVar18 = 2;
          uVar21 = 0x20;
LAB_002c31fa:
          if (lStack_b0 != 0) {
                    /* try { // try from 002c3209 to 002c323d has its CatchHandler @ 002c352a */
            lVar9 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
            (**(code **)(lVar9 + 0x30))(local_d8,local_c8,lStack_b0,local_b8,uVar21,0,__ptr,uVar18);
            local_100 = lStack_b0;
          }
        }
      }
      else {
LAB_002c3430:
        __ptr = (long *)0x0;
      }
                    /* try { // try from 002c3432 to 002c3452 has its CatchHandler @ 002c353b */
      lVar9 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar9 + 0x2d0))(local_d8,local_c8,0,0);
      free(__ptr);
    }
    else if (local_d0 != juce::juce_messageWindowHandle) {
      if (local_d0 == 0) {
        if (local_f0[0] == 0xb) {
          juce::Keys::keyStates._16_8_ = local_b8;
          juce::Keys::keyStates._24_8_ = lStack_b0;
          juce::Keys::keyStates._0_8_ = local_c8;
          juce::Keys::keyStates._8_8_ = lStack_c0;
          param_2 = local_b8;
        }
      }
      else {
        uVar18 = juce::juce_handleXEmbedEvent((juce *)0x0,local_f0);
        if ((char)uVar18 == '\0') {
          pXVar10 = juce::SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                              ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                               juce::XWindowSystem::singletonHolder);
          this = *(XSettings **)(pXVar10 + 0x158);
          if ((this == (XSettings *)0x0) || (local_d0 != *(long *)(this + 8))) {
            lVar9 = juce::getPeerFor(local_d0);
            if ((lVar9 == 0) ||
               (pLVar12 = (LinuxComponentPeer *)
                          __dynamic_cast(lVar9,&juce::ComponentPeer::typeinfo,
                                         &juce::LinuxComponentPeer::typeinfo,0),
               pLVar12 == (LinuxComponentPeer *)0x0)) {
              if (local_f0[0] == 0x16) {
                if (juce::Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002c3314 to 002c331d has its CatchHandler @ 002c34ff */
                  pDVar13 = operator_new(0x1d0);
                    /* try { // try from 002c3321 to 002c3328 has its CatchHandler @ 002c34fd */
                  juce::Desktop::Desktop(pDVar13);
                  juce::Desktop::instance = pDVar13;
                }
                uVar14 = *(uint *)(juce::Desktop::instance + 0xdc);
                if (0 < (int)uVar14) {
                  uVar18 = (ulong)uVar14;
                  if (juce::Desktop::instance == (Desktop *)0x0) goto LAB_002c3360;
                  do {
                    uVar17 = uVar18 - 1;
                    if ((uint)uVar17 < *(uint *)(juce::Desktop::instance + 0xdc)) goto LAB_002c3389;
                    while( true ) {
                      if (uVar18 < 2) goto LAB_002c2ca0;
                      uVar18 = uVar17;
                      if (juce::Desktop::instance != (Desktop *)0x0) break;
LAB_002c3360:
                    /* try { // try from 002c3360 to 002c3369 has its CatchHandler @ 002c3522 */
                      pDVar13 = operator_new(0x1d0);
                    /* try { // try from 002c336d to 002c3374 has its CatchHandler @ 002c350f */
                      juce::Desktop::Desktop(pDVar13);
                      uVar17 = uVar18 - 1;
                      juce::Desktop::instance = pDVar13;
                      if ((uint)uVar17 < *(uint *)(pDVar13 + 0xdc)) {
LAB_002c3389:
                        lVar9 = *(long *)(*(long *)(juce::Desktop::instance + 0xd0) +
                                         (uVar17 & 0xffffffff) * 8);
                        if ((((lVar9 != 0) &&
                             (lVar9 = __dynamic_cast(lVar9,&juce::ComponentPeer::typeinfo,
                                                     &juce::LinuxComponentPeer::typeinfo,0),
                             lVar9 != 0)) && (local_c8 != *(long *)(lVar9 + 0x120))) &&
                           (uVar7 = juce::XWindowSystem::isParentWindowOf
                                              (pXVar10,local_c8,*(long *)(lVar9 + 0x120)),
                           (char)uVar7 != '\0')) {
                          juce::XWindowSystem::dismissBlockingModals(*(long **)(lVar9 + 8));
                        }
                      }
                    }
                  } while( true );
                }
              }
            }
            else {
              pXVar10 = juce::SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                                  ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>
                                    *)juce::XWindowSystem::singletonHolder);
              juce::XWindowSystem::handleWindowMessage
                        (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,pXVar10,pLVar12
                         ,local_f0);
            }
          }
          else if (local_f0[0] == 0x11) {
            juce::XWindowSystemUtilities::XSettings::createXSettings
                      ((XSettings *)&local_138,*(undefined8 *)(pXVar10 + 0x148));
            lVar9 = CONCAT44(uStack_134,local_138);
            this_00 = *(default_delete<juce::XWindowSystemUtilities::XSettings> **)(pXVar10 + 0x158)
            ;
            *(long *)(pXVar10 + 0x158) = lVar9;
            if (this_00 != (default_delete<juce::XWindowSystemUtilities::XSettings> *)0x0) {
              default_delete<juce::XWindowSystemUtilities::XSettings>::operator()(this_00);
              lVar9 = *(long *)(pXVar10 + 0x158);
            }
            if (lVar9 != 0) {
              lVar9 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
              (**(code **)(lVar9 + 0x2c8))
                        (*(undefined8 *)(pXVar10 + 0x148),
                         *(undefined8 *)(*(long *)(pXVar10 + 0x158) + 8),0x420000);
            }
          }
          else if (local_f0[0] == 0x1c) {
            juce::XWindowSystemUtilities::XSettings::update(this);
          }
        }
      }
    }
LAB_002c2ca0:
    if (*(long *)(lVar3 + 0x148) == 0) {
      return;
    }
  } while( true );
}


