// Function : read
// Namespace: VST3:_anonymous_namespace_:IO:ByteOrderStream_1u_
// Entry    : 0018f730
// Prototype: undefined1 read(long * param_1, ulong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6)
// Body     : 0018f730 - 0018f778


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* VST3::(anonymous namespace)::IO::ByteOrderStream<1u>::read(VST3::(anonymous
   namespace)::IO::ReadBufferDesc const&) const */

undefined1 __cdecl
VST3::(anonymous_namespace)::IO::ByteOrderStream<1u>::read
          (long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined4 in_EAX;
  int iVar1;
  undefined1 auStackY_88 [128];
  
  if (param_2 < 0x80000000) {
                    /* try { // try from 0018f753 to 0018f760 has its CatchHandler @ 0018f779 */
    iVar1 = (**(code **)(*param_1 + 0x18))
                      (param_1,param_3,param_2 & 0xffffffff,auStackY_88 + 0x84,*param_1,param_6,
                       in_EAX);
    return iVar1 != 0;
  }
  return 3;
}


