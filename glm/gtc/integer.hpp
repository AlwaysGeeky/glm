///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
/// 
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
///
/// @ref gtc_bit
/// @file glm/gtc/integer.hpp
/// @date 2014-10-25 / 2014-10-25
/// @author Christophe Riccio
///
/// @see core (dependence)
/// @see gtc_bitfield (dependence)
///
/// @defgroup gtc_integer GLM_GTC_integer
/// @ingroup gtc
/// 
/// @brief Allow to perform bit operations on integer values
/// 
/// <glm/gtc/integer.hpp> need to be included to use these functionalities.
///////////////////////////////////////////////////////////////////////////////////

#pragma once

// Dependencies
#include "../detail/setup.hpp"
#include "../detail/precision.hpp"
#include "../detail/_vectorize.hpp"
#include "../vector_relational.hpp"
#include "../common.hpp"
#include <limits>

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTC_integer extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_integer
	/// @{

	/// Return true if the value is a power of two number.
	///
	/// @see gtc_integer
	template <typename genIUType>
	GLM_FUNC_DECL bool isPowerOfTwo(genIUType Value);

	/// Return true if the value is a power of two number.
	///
	/// @see gtc_integer
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<bool, P> isPowerOfTwo(vecType<T, P> const & value);

	/// Return the power of two number which value is just higher the input value,
	/// round up to a power of two.
	///
	/// @see gtc_integer
	template <typename genIUType>
	GLM_FUNC_DECL genIUType ceilPowerOfTwo(genIUType Value);

	/// Return the power of two number which value is just higher the input value,
	/// round up to a power of two.
	///
	/// @see gtc_integer
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> ceilPowerOfTwo(vecType<T, P> const & value);

	/// Return the power of two number which value is just lower the input value,
	/// round down to a power of two.
	///
	/// @see gtc_integer
	template <typename genIUType>
	GLM_FUNC_DECL genIUType floorPowerOfTwo(genIUType Value);

	/// Return the power of two number which value is just lower the input value,
	/// round down to a power of two.
	///
	/// @see gtc_integer
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> floorPowerOfTwo(vecType<T, P> const & value);

	/// Return the power of two number which value is the closet to the input value.
	///
	/// @see gtc_integer
	template <typename genIUType>
	GLM_FUNC_DECL genIUType roundPowerOfTwo(genIUType Value);

	/// Return the power of two number which value is the closet to the input value.
	///
	/// @see gtc_integer
	template <typename T, precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<T, P> roundPowerOfTwo(vecType<T, P> const & value);

	/// @}
} //namespace glm

#include "integer.inl"
