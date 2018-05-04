/**
	@file javascript_dates.js
*/

const days = 
[
	"Sunday",
	"Monday",
	"Tuesday",
	"Wednesday",
	"Thursday",
	"Friday",
	"Saturday"
];

function getDayName(date_string)
{
	return days[new Date(date_string).getDay()];
}