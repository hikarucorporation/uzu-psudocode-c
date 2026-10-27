// Function : write
// Namespace: VST3:_anonymous_namespace_:IO:ByteOrderStream_1u_
// Entry    : 0019dc10
// Prototype: undefined1 write(undefined8 * param_1, ulong param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6)
// Body     : 0019dc10 - 0019dc5b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* VST3::(anonymous namespace)::IO::ByteOrderStream<1u>::write(VST3::(anonymous
   namespace)::IO::WriteBufferDesc const&) */

undefined1 __cdecl
VST3::(anonymous_namespace)::IO::ByteOrderStream<1u>::write
          (undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined4 in_EAX;
  int iVar2;
  undefined1 auStackY_88 [128];
  
  if (param_2 < 0x80000000) {
    lVar1 = *(long *)*param_1;
                    /* try { // try from 0019dc36 to 0019dc43 has its CatchHandler @ 0019dc5c */
    iVar2 = (**(code **)(lVar1 + 0x20))
                      ((long *)*param_1,param_3,param_2 & 0xffffffff,auStackY_88 + 0x84,lVar1,
                       param_6,in_EAX);
    return iVar2 != 0;
  }
  return 3;
}


