// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.Drawing/1.3.0-rc2/Internal/BufferCollections.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Internal-bacec382.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct FloatBuffer;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// public sealed class FloatBuffer :131
// {
uType* FloatBuffer_typeof();
void FloatBuffer__ctor_2_fn(FloatBuffer* __this);
void FloatBuffer__Append1_fn(FloatBuffer* __this, float* value);
void FloatBuffer__New3_fn(FloatBuffer** __retval);
void FloatBuffer__Set_fn(FloatBuffer* __this, int* offset, float* value);

struct FloatBuffer : ::g::Fuse::Drawing::Internal::TypedBuffer
{
    void ctor_2();
    void Append1(float value);
    void Set(int offset, float value);
    static FloatBuffer* New3();
};
// }

}}}} // ::g::Fuse::Drawing::Internal
