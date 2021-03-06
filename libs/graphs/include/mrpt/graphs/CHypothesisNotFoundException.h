/* +------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)            |
   |                          http://www.mrpt.org/                          |
   |                                                                        |
   | Copyright (c) 2005-2018, Individual contributors, see AUTHORS file     |
   | See: http://www.mrpt.org/Authors - All rights reserved.                |
   | Released under BSD License. See details in http://www.mrpt.org/License |
   +------------------------------------------------------------------------+ */
#pragma once

#include <cstdint>
#include <mrpt/core/exceptions.h>
#include <mrpt/graphs/TNodeID.h>
#include <stdexcept>
#include <string>

namespace mrpt
{
namespace graphs
{
// TODO - include docstring, group etc.
class HypothesisNotFoundException : public std::runtime_error
{
   public:
	HypothesisNotFoundException(
		mrpt::graphs::TNodeID from, mrpt::graphs::TNodeID to);
	HypothesisNotFoundException(size_t id);
	~HypothesisNotFoundException() noexcept;
	void clear();
	std::string getErrorMsg() const noexcept;
	const char* what() const noexcept;

   private:
	mrpt::graphs::TNodeID m_from, m_to;

	/**\brief Hypothesis ID */
	size_t m_id;

	/**\brief Error message */
	std::string m_msg;
};
}  // namespace graphs
}  // namespace mrpt
