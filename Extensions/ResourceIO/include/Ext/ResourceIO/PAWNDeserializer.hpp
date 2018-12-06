#pragma once

#include "Deserializer.hpp"

#include <istream>

namespace samp_edgengine::ext::resource_io
{

/// <summary>
/// An interface to every deserialization algorithm.
/// </summary>
struct IPAWNDeserializer
	: virtual IDeserializer
{	
	/// <summary>
	/// Initializes a new instance of the <see cref="IPAWNDeserializer"/> struct.
	/// </summary>
	/// <param name="inputStream_">The input stream.</param>
	IPAWNDeserializer(std::istream& inputStream_)
		: inputStream{ inputStream_ }
	{
		
	}

	std::istream &inputStream;
};

}