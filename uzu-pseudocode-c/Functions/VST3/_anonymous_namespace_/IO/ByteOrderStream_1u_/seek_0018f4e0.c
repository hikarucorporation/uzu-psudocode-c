// Function : seek
// Namespace: VST3:_anonymous_namespace_:IO:ByteOrderStream_1u_
// Entry    : 0018f4e0
// Prototype: bool seek(ByteOrderStream<1u> * this, int param_1, undefined8 param_2)
// Body     : 0018f4e0 - 0018f528


/* VST3::(anonymous namespace)::IO::ByteOrderStream<1u>::seek(VST3::(anonymous
   namespace)::IO::SeekMode, long) const */

bool __thiscall
VST3::(anonymous_namespace)::IO::ByteOrderStream<1u>::seek
          (ByteOrderStream<1u> *this,int param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  long local_8;
  
  uVar1 = 2;
  if (param_1 != 1) {
    uVar1 = param_1 == 2;
  }
  local_8 = 0;
                    /* try { // try from 0018f4ff to 0018f50a has its CatchHandler @ 0018f529 */
  iVar2 = (**(code **)(*(long *)this + 0x28))(this,param_2,uVar1,&local_8);
  return local_8 < 0 || iVar2 != 0;
}


