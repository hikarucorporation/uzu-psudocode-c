// Function : addEdgeAndJoint
// Namespace: juce:PathStrokeHelpers
// Entry    : 002f51f0
// Prototype: undefined addEdgeAndJoint(float param_1_00, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, Path * param_9, int param_10)
// Body     : 002f51f0 - 002f5d6a


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::PathStrokeHelpers::addEdgeAndJoint(juce::Path&, juce::PathStrokeType::JointStyle, float,
   float, float, float, float, float, float, float, float, float, float, float) */

void __cdecl
juce::PathStrokeHelpers::addEdgeAndJoint
          (float param_1_00,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8,Path *param_9,int param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000018;
  float in_stack_00000020;
  
  if (param_10 != 2) {
    fVar6 = (float)((uint)param_7 & _DAT_005d91c0);
    if ((fVar6 == DAT_005d94c8) ||
       (fVar1 = (float)((uint)in_stack_00000008 & _DAT_005d91c0), fVar1 == DAT_005d94c8)) {
      if ((param_7 == in_stack_00000008) && (!NAN(param_7) && !NAN(in_stack_00000008)))
      goto LAB_002f52d1;
LAB_002f5339:
      fVar1 = (float)((uint)param_3 & _DAT_005d91c0);
      fVar5 = (float)((uint)param_5 & _DAT_005d91c0);
      if ((fVar1 == DAT_005d94c8) || (fVar5 == DAT_005d94c8)) {
        if ((param_3 == param_5) && (!NAN(param_3) && !NAN(param_5))) goto LAB_002f5396;
LAB_002f5400:
        if ((fVar5 == DAT_005d94c8) || (fVar6 == DAT_005d94c8)) {
          if ((param_5 == param_7) && (!NAN(param_5) && !NAN(param_7))) goto LAB_002f5459;
        }
        else {
          fVar1 = (float)((uint)(param_5 - param_7) & _DAT_005d91c0);
          if (DAT_005d94cc < fVar1) {
            if (fVar6 <= fVar5) {
              fVar6 = fVar5;
            }
            if (fVar6 * DAT_005d94d0 < fVar1) goto LAB_002f54ce;
          }
LAB_002f5459:
          fVar5 = (float)((uint)param_6 & _DAT_005d91c0);
          fVar6 = param_5;
          fVar1 = param_6;
          if ((fVar5 == DAT_005d94c8) ||
             (fVar2 = (float)(_DAT_005d91c0 & (uint)param_8), fVar2 == DAT_005d94c8)) {
            if ((param_6 == param_8) && (!(NAN(param_6) || NAN(param_8)))) goto LAB_002f55c7;
          }
          else {
            fVar7 = (float)((uint)(param_6 - param_8) & _DAT_005d91c0);
            if (fVar7 <= DAT_005d94cc) goto LAB_002f55c7;
            if (fVar2 <= fVar5) {
              fVar2 = fVar5;
            }
            if (fVar7 <= fVar2 * DAT_005d94d0) goto LAB_002f55c7;
          }
        }
LAB_002f54ce:
        fVar5 = param_5 - param_3;
        fVar7 = param_6 - param_4;
        fVar8 = in_stack_00000008 - param_7;
        fVar1 = in_stack_00000010 - param_8;
        fVar2 = fVar5 * fVar1 - fVar7 * fVar8;
        fVar6 = (float)(_DAT_005d91c0 & (uint)fVar2);
        if (fVar6 == DAT_005d94c8) {
          if ((fVar2 == 0.0) && (!NAN(fVar2))) goto LAB_002f55f0;
LAB_002f5552:
          fVar8 = (fVar8 * (param_4 - param_8) - fVar1 * (param_3 - param_7)) / fVar2;
          fVar6 = fVar8 * fVar5 + param_3;
          fVar1 = fVar8 * fVar7 + param_4;
          if (((0.0 <= fVar8) && (fVar8 <= DAT_005d9038)) &&
             (fVar2 = ((param_4 - param_8) * fVar5 +
                      (float)((uint)(param_3 - param_7) ^ _DAT_006524b0) * fVar7) / fVar2,
             0.0 <= fVar2)) {
            if (fVar2 <= DAT_005d9038) goto LAB_002f55c7;
          }
          fVar5 = (fVar5 * fVar5 + fVar7 * fVar7) * (DAT_005d9054 + fVar8) * (DAT_005d9054 + fVar8);
          fVar5 = (float)(-(uint)(fVar8 < DAT_005d9038) & (_DAT_006524b0 ^ (uint)fVar5) |
                         ~-(uint)(fVar8 < DAT_005d9038) & (uint)fVar5);
          goto joined_r0x002f5d43;
        }
        if ((DAT_005d94cc < fVar6) && (DAT_005d94d0 * fVar6 < fVar6)) goto LAB_002f5552;
LAB_002f55f0:
        fVar6 = (float)(_DAT_005d91c0 & (uint)fVar5);
        if (fVar6 == DAT_005d94c8) {
          if ((fVar5 != 0.0) || (NAN(fVar5))) goto LAB_002f56d4;
LAB_002f568a:
          fVar2 = (float)(_DAT_005d91c0 & (uint)fVar7);
          if (fVar2 == DAT_005d94c8) {
            if ((fVar7 != 0.0) || (NAN(fVar7))) goto LAB_002f56d4;
          }
          else if ((DAT_005d94cc < fVar2) && (DAT_005d94d0 * fVar2 < fVar2)) goto LAB_002f56d4;
          goto LAB_002f5b3e;
        }
        if ((fVar6 <= DAT_005d94cc) || (fVar6 <= DAT_005d94d0 * fVar6)) goto LAB_002f568a;
LAB_002f56d4:
        fVar2 = (float)(_DAT_005d91c0 & (uint)fVar8);
        if (fVar2 == DAT_005d94c8) {
          if ((fVar8 != 0.0) || (NAN(fVar8))) goto LAB_002f575d;
LAB_002f5713:
          fVar3 = (float)(_DAT_005d91c0 & (uint)fVar1);
          if (fVar3 == DAT_005d94c8) {
            if ((fVar1 != 0.0) || (NAN(fVar1))) goto LAB_002f575d;
          }
          else if ((DAT_005d94cc < fVar3) && (DAT_005d94d0 * fVar3 < fVar3)) goto LAB_002f575d;
          goto LAB_002f5b3e;
        }
        if ((fVar2 <= DAT_005d94cc) || (fVar2 <= DAT_005d94d0 * fVar2)) goto LAB_002f5713;
LAB_002f575d:
        fVar3 = (float)(_DAT_005d91c0 & (uint)fVar7);
        if (fVar3 == DAT_005d94c8) {
          if ((fVar7 == 0.0) && (!NAN(fVar7))) goto LAB_002f57a8;
LAB_002f586c:
          fVar4 = (float)(_DAT_005d91c0 & (uint)fVar1);
          if (fVar4 == DAT_005d94c8) {
            if ((fVar1 == 0.0) && (!NAN(fVar1))) goto LAB_002f58b7;
LAB_002f5959:
            if (fVar6 == DAT_005d94c8) {
              if ((fVar5 == 0.0) && (!NAN(fVar5))) goto LAB_002f59a6;
LAB_002f5984:
              if (fVar2 != DAT_005d94c8) goto LAB_002f59d1;
LAB_002f59fc:
              if ((fVar8 != 0.0) || (NAN(fVar8))) goto LAB_002f5b3e;
            }
            else {
              if ((DAT_005d94cc < fVar6) && (DAT_005d94d0 * fVar6 < fVar6)) goto LAB_002f5984;
LAB_002f59a6:
              if (fVar2 == DAT_005d94c8) {
                if ((fVar8 != 0.0) || (NAN(fVar8))) {
LAB_002f5ac8:
                  fVar2 = (param_3 - param_7) / fVar8;
                  fVar1 = fVar1 * fVar2 + param_8;
                  fVar5 = (fVar1 - param_6) * (fVar1 - param_6);
                  fVar6 = param_3;
                  if (fVar1 < param_6 != param_6 <= param_4) {
                    fVar5 = (float)((uint)fVar5 ^ _DAT_006524b0);
                  }
                  goto joined_r0x002f5b16;
                }
                goto LAB_002f59fc;
              }
              if ((DAT_005d94cc < fVar2) && (DAT_005d94d0 * fVar2 < fVar2)) goto LAB_002f5ac8;
LAB_002f59d1:
              if ((DAT_005d94cc < fVar2) && (DAT_005d94d0 * fVar2 < fVar2)) goto LAB_002f5b3e;
            }
            if (fVar6 == DAT_005d94c8) {
              if ((fVar5 != 0.0) || (NAN(fVar5))) goto LAB_002f5a46;
            }
            else if ((DAT_005d94cc < fVar6) && (DAT_005d94d0 * fVar6 < fVar6)) {
LAB_002f5a46:
              fVar2 = (param_7 - param_3) / fVar5;
              fVar6 = (DAT_005d9054 + fVar2) * fVar7;
              fVar6 = fVar6 * fVar6;
              fVar5 = (float)(-(uint)(fVar2 < DAT_005d9038) & (_DAT_006524b0 ^ (uint)fVar6) |
                             ~-(uint)(fVar2 < DAT_005d9038) & (uint)fVar6);
              fVar1 = fVar2 * fVar7 + param_4;
              fVar6 = param_7;
              goto joined_r0x002f5aa6;
            }
LAB_002f5b3e:
            fVar6 = (param_5 + param_7) * _DAT_005d9920;
            fVar1 = (param_6 + param_8) * _UNK_005d9924;
            fVar5 = 0.0;
          }
          else {
            if ((DAT_005d94cc < fVar4) && (DAT_005d94d0 * fVar4 < fVar4)) goto LAB_002f5959;
LAB_002f58b7:
            if (fVar3 == DAT_005d94c8) {
              if ((fVar7 == 0.0) && (!NAN(fVar7))) goto LAB_002f5959;
            }
            else if ((fVar3 <= DAT_005d94cc) || (fVar3 <= DAT_005d94d0 * fVar3)) goto LAB_002f5959;
            fVar2 = (param_8 - param_4) / fVar7;
            fVar6 = param_3 + fVar2 * fVar5;
            fVar5 = (DAT_005d9054 + fVar2) * fVar5;
            fVar5 = fVar5 * fVar5;
            fVar5 = (float)(-(uint)(fVar2 < DAT_005d9038) & (_DAT_006524b0 ^ (uint)fVar5) |
                           ~-(uint)(fVar2 < DAT_005d9038) & (uint)fVar5);
            fVar1 = param_8;
joined_r0x002f5aa6:
            if (0.0 <= fVar2) goto joined_r0x002f5abd;
          }
        }
        else {
          if ((DAT_005d94cc < fVar3) && (DAT_005d94d0 * fVar3 < fVar3)) goto LAB_002f586c;
LAB_002f57a8:
          fVar4 = (float)(_DAT_005d91c0 & (uint)fVar1);
          if (fVar4 == DAT_005d94c8) {
            if ((fVar1 != 0.0) || (NAN(fVar1))) goto LAB_002f57e6;
            goto LAB_002f586c;
          }
          if ((fVar4 <= DAT_005d94cc) || (fVar4 <= DAT_005d94d0 * fVar4)) goto LAB_002f586c;
LAB_002f57e6:
          fVar2 = (param_4 - param_8) / fVar1;
          fVar6 = fVar8 * fVar2 + param_7;
          fVar5 = (fVar6 - param_5) * (fVar6 - param_5);
          fVar1 = param_4;
          if (fVar6 < param_5 != param_5 <= param_3) {
            fVar5 = (float)((uint)fVar5 ^ _DAT_006524b0);
          }
joined_r0x002f5b16:
          if (fVar2 < 0.0) goto joined_r0x002f5d43;
joined_r0x002f5abd:
          if (fVar2 <= DAT_005d9038) goto LAB_002f55c7;
        }
joined_r0x002f5d43:
        if (param_10 != 0) {
          fVar6 = atan2f(param_5 - in_stack_00000018,param_6 - in_stack_00000020);
          fVar1 = atan2f(param_7 - in_stack_00000018,param_8 - in_stack_00000020);
          Path::lineTo(param_5,param_6,param_9);
          if (DAT_005d9068 < (float)((uint)(fVar6 - fVar1) & _DAT_005d91c0)) {
            if ((DAT_00652ba0 + fVar6 < fVar1) ||
               ((fVar1 < fVar6 && (DAT_00652ba4 + fVar6 <= fVar1)))) {
              fVar2 = fVar1 + _DAT_005de550;
              for (fVar5 = fVar6 + DAT_005de52c;
                  (float)(~-(uint)(fVar6 < fVar1) & (uint)fVar1 |
                         (uint)fVar2 & -(uint)(fVar6 < fVar1)) < fVar5; fVar5 = fVar5 + DAT_005de52c
                  ) {
                fVar7 = sinf(fVar5);
                fVar8 = cosf(fVar5);
                Path::lineTo(fVar7 * param_2 + in_stack_00000018,fVar8 * param_2 + in_stack_00000020
                             ,param_9);
              }
            }
            else {
              for (fVar6 = (float)(~-(uint)(fVar1 < fVar6) & (uint)fVar6 |
                                  (uint)(fVar6 + _DAT_005de550) & -(uint)(fVar1 < fVar6)) +
                           DAT_005d9068; fVar6 < fVar1; fVar6 = fVar6 + DAT_005d9068) {
                fVar5 = sinf(fVar6);
                fVar2 = cosf(fVar6);
                Path::lineTo(fVar5 * param_2 + in_stack_00000018,fVar2 * param_2 + in_stack_00000020
                             ,param_9);
              }
            }
          }
          goto LAB_002f522b;
        }
        if ((0.0 < fVar5) && (fVar5 < param_1_00)) {
LAB_002f55c7:
          Path::lineTo(fVar6,fVar1,param_9);
          return;
        }
      }
      else {
        fVar2 = (float)((uint)(param_3 - param_5) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar2) {
          fVar7 = fVar5;
          if (fVar5 <= fVar1) {
            fVar7 = fVar1;
          }
          if (fVar7 * DAT_005d94d0 < fVar2) goto LAB_002f5400;
        }
LAB_002f5396:
        fVar1 = (float)((uint)param_4 & _DAT_005d91c0);
        if ((fVar1 == DAT_005d94c8) ||
           (fVar2 = (float)((uint)param_6 & _DAT_005d91c0), fVar2 == DAT_005d94c8)) {
          if ((param_4 != param_6) || (NAN(param_4) || NAN(param_6))) goto LAB_002f5400;
        }
        else {
          fVar7 = (float)((uint)(param_4 - param_6) & _DAT_005d91c0);
          if (DAT_005d94cc < fVar7) {
            if (fVar2 <= fVar1) {
              fVar2 = fVar1;
            }
            if (fVar2 * DAT_005d94d0 < fVar7) goto LAB_002f5400;
          }
        }
      }
    }
    else {
      fVar5 = (float)((uint)(param_7 - in_stack_00000008) & _DAT_005d91c0);
      if (DAT_005d94cc < fVar5) {
        if (fVar1 <= fVar6) {
          fVar1 = fVar6;
        }
        if (fVar1 * DAT_005d94d0 < fVar5) goto LAB_002f5339;
      }
LAB_002f52d1:
      fVar1 = (float)((uint)param_8 & _DAT_005d91c0);
      if ((fVar1 == DAT_005d94c8) ||
         (fVar5 = (float)((uint)in_stack_00000010 & _DAT_005d91c0), fVar5 == DAT_005d94c8)) {
        if ((param_8 != in_stack_00000010) || (NAN(param_8) || NAN(in_stack_00000010)))
        goto LAB_002f5339;
      }
      else {
        fVar2 = (float)((uint)(param_8 - in_stack_00000010) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar2) {
          if (fVar5 <= fVar1) {
            fVar5 = fVar1;
          }
          if (fVar5 * DAT_005d94d0 < fVar2) goto LAB_002f5339;
        }
      }
    }
  }
  Path::lineTo(param_5,param_6,param_9);
LAB_002f522b:
  Path::lineTo(param_7,param_8,param_9);
  return;
}


