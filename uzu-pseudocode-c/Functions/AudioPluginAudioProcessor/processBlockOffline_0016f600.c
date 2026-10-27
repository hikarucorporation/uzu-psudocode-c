// Function : processBlockOffline
// Namespace: AudioPluginAudioProcessor
// Entry    : 0016f600
// Prototype: undefined processBlockOffline(AudioPluginAudioProcessor * this, int * param_1, uint param_2, uint param_3)
// Body     : 0016f600 - 001703cd


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioPluginAudioProcessor::processBlockOffline(juce::AudioBuffer<float>&, int, int) */

void __thiscall
AudioPluginAudioProcessor::processBlockOffline
          (AudioPluginAudioProcessor *this,int *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *__s;
  void *__ptr;
  int iVar3;
  int iVar4;
  long *__ptr_00;
  pthread_mutex_t *__mutex;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  size_t __size;
  AudioPluginAudioProcessor AVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  uVar2 = param_1[1];
  if ((int)uVar2 < 1) {
    return;
  }
  if ((int)param_2 < 1) {
    param_2 = 1;
  }
  uVar12 = (ulong)param_2;
  if (1 < param_2) {
    uVar12 = 2;
  }
  uVar19 = 1;
  if (0 < (int)param_3) {
    uVar19 = param_3;
  }
  if (1 < uVar19) {
    uVar19 = 2;
  }
  iVar3 = (int)uVar12;
  __ptr_00 = malloc((ulong)(uint)(iVar3 * 8) + uVar12 * uVar2 * 4 + 0x28);
  if (__ptr_00 == (long *)0x0) {
    puVar6 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar6 = PTR_vtable_00715738 + 0x10;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
  }
  lVar9 = (ulong)(uint)(iVar3 * 8) + 8 + (long)__ptr_00;
  *__ptr_00 = lVar9;
  if (iVar3 != 1) {
    __ptr_00[1] = lVar9 + (ulong)uVar2 * 4;
  }
  __ptr_00[uVar12] = 0;
  uVar10 = 0;
  do {
    juce::FloatVectorOperationsBase<float,int>::copy
              ((void *)__ptr_00[uVar10],*(void **)(*(long *)(param_1 + 4) + uVar10 * 8),uVar2);
    uVar10 = uVar10 + 1;
  } while (uVar12 != uVar10);
                    /* try { // try from 0016f6e1 to 0016f6e5 has its CatchHandler @ 001703d0 */
  __mutex = (pthread_mutex_t *)LibPdManager::getGlobalMutex();
  iVar4 = pthread_mutex_lock(__mutex);
  if (iVar4 != 0) {
                    /* try { // try from 001703c7 to 001703cd has its CatchHandler @ 001703d0 */
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  if ((*(long *)(this + 0x280) == 0) || (((byte)this[0x278] & 1) == 0)) {
    if ((char)param_1[0x48] == '\0') {
      if (0 < *param_1) {
        lVar9 = 0;
        do {
          juce::FloatVectorOperationsBase<float,int>::clear
                    (*(void **)(*(long *)(param_1 + 4) + lVar9 * 8),param_1[1]);
          lVar9 = lVar9 + 1;
        } while (lVar9 < *param_1);
      }
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
LAB_001702e6:
    pthread_mutex_unlock(__mutex);
    free(__ptr_00);
    return;
  }
                    /* try { // try from 0016f774 to 0016f778 has its CatchHandler @ 001703ce */
  libpd_set_instance(*(undefined8 *)(this + 0x280));
  uVar10 = (ulong)(uVar19 * 8);
  uVar12 = (ulong)uVar19;
  iVar4 = 0;
  do {
    iVar18 = *(int *)(this + 0x754);
    if ((iVar4 < (int)uVar2) && (iVar18 < 0x40)) {
      uVar7 = uVar2 - iVar4;
      if ((int)(0x40U - iVar18) <= (int)(uVar2 - iVar4)) {
        uVar7 = 0x40U - iVar18;
      }
      if (0 < (int)uVar7) {
        lVar9 = *__ptr_00;
        lVar14 = (long)iVar4;
        uVar16 = (ulong)uVar7;
        iVar8 = iVar18 * 2;
        do {
          uVar1 = *(undefined4 *)(lVar9 + lVar14 * 4);
          uVar22 = uVar1;
          if (1 < iVar3) {
            uVar22 = *(undefined4 *)(__ptr_00[1] + lVar14 * 4);
          }
          *(undefined4 *)(this + (long)iVar8 * 4 + 0x554) = uVar1;
          *(undefined4 *)(this + ((long)iVar8 * 4 | 4U) + 0x554) = uVar22;
          iVar8 = iVar8 + 2;
          lVar14 = lVar14 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      iVar18 = iVar18 + uVar7;
      *(int *)(this + 0x754) = iVar18;
      iVar4 = iVar4 + uVar7;
    }
    if (iVar18 != 0x40) {
      uVar7 = *(uint *)(this + 0x880);
      uVar20 = uVar2;
      if ((int)uVar7 < (int)uVar2) {
        uVar20 = uVar7;
      }
      if (0 < (int)uVar20) {
        uVar10 = 0;
        do {
          if (this[0x878] == (AudioPluginAudioProcessor)0x0) {
            *(undefined1 *)(param_1 + 0x48) = 0;
            juce::FloatVectorOperationsBase<float,int>::copy
                      (*(void **)(*(long *)(param_1 + 4) + uVar10 * 8),
                       *(void **)(*(long *)(this + 0x768) + uVar10 * 8),uVar20);
          }
          else if ((char)param_1[0x48] == '\0') {
            juce::FloatVectorOperationsBase<float,int>::clear
                      (*(void **)(*(long *)(param_1 + 4) + uVar10 * 8),uVar20);
          }
          uVar10 = uVar10 + 1;
        } while (uVar12 != uVar10);
      }
      lVar9 = (long)(int)uVar20;
      if (((int)uVar7 < (int)uVar2) && ((char)param_1[0x48] == '\0')) {
        lVar14 = 0;
        do {
          juce::FloatVectorOperationsBase<float,int>::clear
                    ((void *)(*(long *)(*(long *)(param_1 + 4) + lVar14 * 8) + lVar9 * 4),
                     uVar2 - uVar20);
          do {
            if (uVar12 - 1 == lVar14) goto LAB_00170229;
            lVar14 = lVar14 + 1;
          } while ((char)param_1[0x48] != '\0');
        } while( true );
      }
LAB_00170229:
      uVar7 = *(int *)(this + 0x880) - uVar20;
      if (uVar7 != 0 && (int)uVar20 <= *(int *)(this + 0x880)) {
        this[0x878] = (AudioPluginAudioProcessor)0x0;
        memmove((void *)**(undefined8 **)(this + 0x768),
                (void *)((long)**(undefined8 **)(this + 0x768) + lVar9 * 4),(ulong)uVar7 << 2);
        if (uVar19 != 1) {
          this[0x878] = (AudioPluginAudioProcessor)0x0;
          memmove(*(void **)(*(long *)(this + 0x768) + 8),
                  (void *)((long)*(void **)(*(long *)(this + 0x768) + 8) + lVar9 * 4),
                  (ulong)uVar7 << 2);
        }
      }
      *(uint *)(this + 0x880) = uVar7;
      if (((int)uVar19 < (int)param_3) && ((char)param_1[0x48] == '\0')) {
        do {
          juce::FloatVectorOperationsBase<float,int>::clear
                    (*(void **)(*(long *)(param_1 + 4) + uVar12 * 8),uVar2);
          do {
            if ((ulong)param_3 - 1 == uVar12) goto LAB_001702e6;
            uVar12 = uVar12 + 1;
          } while ((char)param_1[0x48] != '\0');
        } while( true );
      }
      goto LAB_001702e6;
    }
                    /* try { // try from 0016f8cd to 0016fefa has its CatchHandler @ 001703d7 */
    fVar21 = (float)(**(code **)(*(long *)**(undefined8 **)(this + 0x238) + 0x10))();
    if (this[0x550] == (AudioPluginAudioProcessor)0x0) {
LAB_0016f947:
      libpd_float("Param_1");
      *(float *)(this + 0x528) = fVar21;
    }
    else {
      fVar24 = *(float *)(this + 0x528);
      fVar25 = (float)((uint)fVar21 & _DAT_005d91c0);
      if ((fVar25 == DAT_005d94c8) ||
         (fVar23 = (float)((uint)fVar24 & _DAT_005d91c0), fVar23 == DAT_005d94c8)) {
        if ((fVar21 != fVar24) || (NAN(fVar21) || NAN(fVar24))) goto LAB_0016f947;
      }
      else {
        fVar24 = (float)((uint)(fVar21 - fVar24) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar24) {
          if (fVar23 <= fVar25) {
            fVar23 = fVar25;
          }
          if (fVar23 * DAT_005d94d0 < fVar24) goto LAB_0016f947;
        }
      }
    }
    fVar21 = (float)(**(code **)(**(long **)(*(long *)(this + 0x238) + 8) + 0x10))();
    if (this[0x550] == (AudioPluginAudioProcessor)0x0) {
LAB_0016f9e7:
      libpd_float("Param_2");
      *(float *)(this + 0x52c) = fVar21;
    }
    else {
      fVar24 = *(float *)(this + 0x52c);
      fVar25 = (float)((uint)fVar21 & _DAT_005d91c0);
      if ((fVar25 == DAT_005d94c8) ||
         (fVar23 = (float)((uint)fVar24 & _DAT_005d91c0), fVar23 == DAT_005d94c8)) {
        if ((fVar21 != fVar24) || (NAN(fVar21) || NAN(fVar24))) goto LAB_0016f9e7;
      }
      else {
        fVar24 = (float)((uint)(fVar21 - fVar24) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar24) {
          if (fVar23 <= fVar25) {
            fVar23 = fVar25;
          }
          if (fVar23 * DAT_005d94d0 < fVar24) goto LAB_0016f9e7;
        }
      }
    }
    fVar21 = (float)(**(code **)(**(long **)(*(long *)(this + 0x238) + 0x10) + 0x10))();
    if (this[0x550] == (AudioPluginAudioProcessor)0x0) {
LAB_0016fa87:
      libpd_float("Param_3");
      *(float *)(this + 0x530) = fVar21;
    }
    else {
      fVar24 = *(float *)(this + 0x530);
      fVar25 = (float)((uint)fVar21 & _DAT_005d91c0);
      if ((fVar25 == DAT_005d94c8) ||
         (fVar23 = (float)((uint)fVar24 & _DAT_005d91c0), fVar23 == DAT_005d94c8)) {
        if ((fVar21 != fVar24) || (NAN(fVar21) || NAN(fVar24))) goto LAB_0016fa87;
      }
      else {
        fVar24 = (float)((uint)(fVar21 - fVar24) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar24) {
          if (fVar23 <= fVar25) {
            fVar23 = fVar25;
          }
          if (fVar23 * DAT_005d94d0 < fVar24) goto LAB_0016fa87;
        }
      }
    }
    fVar21 = (float)(**(code **)(**(long **)(*(long *)(this + 0x238) + 0x18) + 0x10))();
    if (this[0x550] == (AudioPluginAudioProcessor)0x0) {
LAB_0016fb27:
      libpd_float("Param_4");
      *(float *)(this + 0x534) = fVar21;
    }
    else {
      fVar24 = *(float *)(this + 0x534);
      fVar25 = (float)((uint)fVar21 & _DAT_005d91c0);
      if ((fVar25 == DAT_005d94c8) ||
         (fVar23 = (float)((uint)fVar24 & _DAT_005d91c0), fVar23 == DAT_005d94c8)) {
        if ((fVar21 != fVar24) || (NAN(fVar21) || NAN(fVar24))) goto LAB_0016fb27;
      }
      else {
        fVar24 = (float)((uint)(fVar21 - fVar24) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar24) {
          if (fVar23 <= fVar25) {
            fVar23 = fVar25;
          }
          if (fVar23 * DAT_005d94d0 < fVar24) goto LAB_0016fb27;
        }
      }
    }
    fVar21 = (float)(**(code **)(**(long **)(*(long *)(this + 0x238) + 0x20) + 0x10))();
    if (this[0x550] == (AudioPluginAudioProcessor)0x0) {
LAB_0016fbc7:
      libpd_float("Param_5");
      *(float *)(this + 0x538) = fVar21;
    }
    else {
      fVar24 = *(float *)(this + 0x538);
      fVar25 = (float)((uint)fVar21 & _DAT_005d91c0);
      if ((fVar25 == DAT_005d94c8) ||
         (fVar23 = (float)((uint)fVar24 & _DAT_005d91c0), fVar23 == DAT_005d94c8)) {
        if ((fVar21 != fVar24) || (NAN(fVar21) || NAN(fVar24))) goto LAB_0016fbc7;
      }
      else {
        fVar24 = (float)((uint)(fVar21 - fVar24) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar24) {
          if (fVar23 <= fVar25) {
            fVar23 = fVar25;
          }
          if (fVar23 * DAT_005d94d0 < fVar24) goto LAB_0016fbc7;
        }
      }
    }
    fVar21 = (float)(**(code **)(**(long **)(*(long *)(this + 0x238) + 0x28) + 0x10))();
    if (this[0x550] == (AudioPluginAudioProcessor)0x0) {
LAB_0016fc67:
      libpd_float("Param_6");
      *(float *)(this + 0x53c) = fVar21;
    }
    else {
      fVar24 = *(float *)(this + 0x53c);
      fVar25 = (float)((uint)fVar21 & _DAT_005d91c0);
      if ((fVar25 == DAT_005d94c8) ||
         (fVar23 = (float)((uint)fVar24 & _DAT_005d91c0), fVar23 == DAT_005d94c8)) {
        if ((fVar21 != fVar24) || (NAN(fVar21) || NAN(fVar24))) goto LAB_0016fc67;
      }
      else {
        fVar24 = (float)((uint)(fVar21 - fVar24) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar24) {
          if (fVar23 <= fVar25) {
            fVar23 = fVar25;
          }
          if (fVar23 * DAT_005d94d0 < fVar24) goto LAB_0016fc67;
        }
      }
    }
    fVar21 = (float)(**(code **)(**(long **)(*(long *)(this + 0x238) + 0x48) + 0x10))();
    if (this[0x550] == (AudioPluginAudioProcessor)0x0) {
LAB_0016fd07:
      libpd_float("Param_7");
      *(float *)(this + 0x54c) = fVar21;
    }
    else {
      fVar24 = *(float *)(this + 0x54c);
      fVar25 = (float)((uint)fVar21 & _DAT_005d91c0);
      if ((fVar25 == DAT_005d94c8) ||
         (fVar23 = (float)((uint)fVar24 & _DAT_005d91c0), fVar23 == DAT_005d94c8)) {
        if ((fVar21 != fVar24) || (NAN(fVar21) || NAN(fVar24))) goto LAB_0016fd07;
      }
      else {
        fVar24 = (float)((uint)(fVar21 - fVar24) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar24) {
          if (fVar23 <= fVar25) {
            fVar23 = fVar25;
          }
          if (fVar23 * DAT_005d94d0 < fVar24) goto LAB_0016fd07;
        }
      }
    }
    fVar21 = (float)(**(code **)(**(long **)(*(long *)(this + 0x238) + 0x40) + 0x10))();
    if (this[0x550] == (AudioPluginAudioProcessor)0x0) {
LAB_0016fda7:
      libpd_float("Param_8");
      *(float *)(this + 0x548) = fVar21;
    }
    else {
      fVar24 = *(float *)(this + 0x548);
      fVar25 = (float)((uint)fVar21 & _DAT_005d91c0);
      if ((fVar25 == DAT_005d94c8) ||
         (fVar23 = (float)((uint)fVar24 & _DAT_005d91c0), fVar23 == DAT_005d94c8)) {
        if ((fVar21 != fVar24) || (NAN(fVar21) || NAN(fVar24))) goto LAB_0016fda7;
      }
      else {
        fVar24 = (float)((uint)(fVar21 - fVar24) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar24) {
          if (fVar23 <= fVar25) {
            fVar23 = fVar25;
          }
          if (fVar23 * DAT_005d94d0 < fVar24) goto LAB_0016fda7;
        }
      }
    }
    fVar21 = (float)(**(code **)(**(long **)(*(long *)(this + 0x238) + 0x38) + 0x10))();
    if (this[0x550] == (AudioPluginAudioProcessor)0x0) {
LAB_0016fe47:
      libpd_float("Param_9");
      *(float *)(this + 0x544) = fVar21;
    }
    else {
      fVar24 = *(float *)(this + 0x544);
      fVar25 = (float)((uint)fVar21 & _DAT_005d91c0);
      if ((fVar25 == DAT_005d94c8) ||
         (fVar23 = (float)((uint)fVar24 & _DAT_005d91c0), fVar23 == DAT_005d94c8)) {
        if ((fVar21 != fVar24) || (NAN(fVar21) || NAN(fVar24))) goto LAB_0016fe47;
      }
      else {
        fVar24 = (float)((uint)(fVar21 - fVar24) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar24) {
          if (fVar23 <= fVar25) {
            fVar23 = fVar25;
          }
          if (fVar23 * DAT_005d94d0 < fVar24) goto LAB_0016fe47;
        }
      }
    }
    fVar21 = (float)(**(code **)(**(long **)(*(long *)(this + 0x238) + 0x30) + 0x10))();
    if (this[0x550] == (AudioPluginAudioProcessor)0x0) {
LAB_0016fee7:
      libpd_float("Param_10");
      *(float *)(this + 0x540) = fVar21;
    }
    else {
      fVar24 = *(float *)(this + 0x540);
      fVar25 = (float)((uint)fVar21 & _DAT_005d91c0);
      if ((fVar25 == DAT_005d94c8) ||
         (fVar23 = (float)((uint)fVar24 & _DAT_005d91c0), fVar23 == DAT_005d94c8)) {
        if ((fVar21 != fVar24) || (NAN(fVar21) || NAN(fVar24))) goto LAB_0016fee7;
      }
      else {
        fVar24 = (float)((uint)(fVar21 - fVar24) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar24) {
          if (fVar23 <= fVar25) {
            fVar23 = fVar25;
          }
          if (fVar23 * DAT_005d94d0 < fVar24) goto LAB_0016fee7;
        }
      }
    }
    this[0x550] = (AudioPluginAudioProcessor)0x1;
    __s = *(undefined4 **)(this + 0x508);
    if (__s != *(undefined4 **)(this + 0x510)) {
      memset(__s,0,(long)*(undefined4 **)(this + 0x510) - (long)__s & 0xfffffffffffffffc);
    }
                    /* try { // try from 0016ff30 to 0016ff3f has its CatchHandler @ 001703d7 */
    libpd_process_float(1,(undefined4 *)(this + 0x554),__s);
    iVar18 = *(int *)(this + 0x880);
    if (*(int *)(this + 0x75c) - iVar18 < 0x40) {
      uVar7 = *(int *)(this + 0x75c) + 0xff;
      uVar7 = (int)uVar7 >> 1 | uVar7;
      uVar7 = (int)uVar7 >> 2 | uVar7;
      uVar7 = (int)uVar7 >> 4 | uVar7;
      uVar7 = (int)uVar7 >> 8 | uVar7;
      iVar18 = ((int)uVar7 >> 0x10 | uVar7) + 1;
      __size = uVar12 * 4 * (long)iVar18 + uVar10 + 0x28;
      if (__size == 0) {
        plVar5 = (long *)0x0;
      }
      else {
        plVar5 = malloc(__size);
        if (plVar5 == (long *)0x0) {
          puVar6 = (undefined8 *)__cxa_allocate_exception(8);
          *puVar6 = PTR_vtable_00715738 + 0x10;
                    /* try { // try from 00170383 to 00170398 has its CatchHandler @ 001703d5 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar6,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
        }
        lVar9 = (long)plVar5 + uVar10 + 8;
        *plVar5 = lVar9;
        if (uVar19 != 1) {
          plVar5[1] = lVar9 + (long)iVar18 * 4;
        }
        plVar5[uVar12] = 0;
      }
      uVar16 = 0;
      do {
        juce::FloatVectorOperationsBase<float,int>::clear((void *)plVar5[uVar16],iVar18);
        uVar16 = uVar16 + 1;
      } while (uVar12 != uVar16);
      iVar8 = *(int *)(this + 0x880);
      AVar13 = (AudioPluginAudioProcessor)0x1;
      if (0 < iVar8) {
        lVar9 = 0;
        AVar13 = (AudioPluginAudioProcessor)0x1;
        do {
          if (0 < iVar8) {
            if (this[0x878] == (AudioPluginAudioProcessor)0x0) {
              juce::FloatVectorOperationsBase<float,int>::copy
                        ((void *)plVar5[lVar9],*(void **)(*(long *)(this + 0x768) + lVar9 * 8),iVar8
                        );
            }
            else {
              if (AVar13 != (AudioPluginAudioProcessor)0x0) goto LAB_0017006d;
              juce::FloatVectorOperationsBase<float,int>::clear((void *)plVar5[lVar9],iVar8);
            }
            AVar13 = (AudioPluginAudioProcessor)0x0;
          }
LAB_0017006d:
          if (uVar12 - 1 == lVar9) break;
          iVar8 = *(int *)(this + 0x880);
          lVar9 = lVar9 + 1;
        } while( true );
      }
      *(uint *)(this + 0x758) = uVar19;
      *(int *)(this + 0x75c) = iVar18;
      *(size_t *)(this + 0x760) = __size;
      __ptr = *(void **)(this + 0x770);
      *(long **)(this + 0x770) = plVar5;
      this[0x878] = AVar13;
      *(AudioPluginAudioProcessor **)(this + 0x768) = this + 0x778;
      memcpy(this + 0x778,plVar5,uVar10);
      free(__ptr);
      iVar18 = *(int *)(this + 0x880);
    }
    lVar14 = *(long *)(this + 0x508);
    plVar5 = *(long **)(this + 0x768);
    lVar9 = *plVar5 + (long)iVar18 * 4;
    lVar17 = lVar9 + 4;
    lVar15 = (long)iVar18 * 4;
    lVar11 = 0;
    do {
      *(undefined4 *)(lVar9 + lVar11) = *(undefined4 *)(lVar14 + lVar11 * 2);
      if ((int)uVar19 < 2) {
        *(undefined4 *)(lVar17 + lVar11) = *(undefined4 *)(lVar14 + 8 + lVar11 * 2);
      }
      else {
        *(undefined4 *)(lVar11 + plVar5[1] + lVar15) = *(undefined4 *)(lVar14 + 4 + lVar11 * 2);
        *(undefined4 *)(lVar17 + lVar11) = *(undefined4 *)(lVar14 + 8 + lVar11 * 2);
        *(undefined4 *)(lVar11 + 4 + plVar5[1] + lVar15) =
             *(undefined4 *)(lVar14 + 0xc + lVar11 * 2);
      }
      lVar11 = lVar11 + 8;
    } while (lVar11 != 0x100);
    this[0x878] = (AudioPluginAudioProcessor)0x0;
    *(undefined4 *)(this + 0x754) = 0;
    *(int *)(this + 0x880) = iVar18 + 0x40;
  } while( true );
}


