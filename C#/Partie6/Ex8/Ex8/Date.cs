using System;

public class Date
{
	enum Day
    {
		Lundi,
		Mardi,
		Mercredi,
		Jeudi,
		Vendredi,
		Samedi,
		Dimanche
    }

	private String[] months = {"Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin", "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"}; 

	public Date()
	{
	}

	public String selectDay(int num)
    {
		String day = String.Empty;

        switch (num)
        {
			case 1:
				day = Day.Lundi.ToString();
				break;
			case 2:
				day = Day.Mardi.ToString();
				break;
			case 3:
				day = Day.Mercredi.ToString();
				break;
			case 4:
				day = Day.Jeudi.ToString();
				break;
			case 5:
				day = Day.Vendredi.ToString();
				break;
			case 6:
				day = Day.Samedi.ToString();
				break;
			case 7:
				day = Day.Dimanche.ToString();
				break;
			default:
				Console.WriteLine("####");
				break;
        }

		return day;
    }

	public String dayNum(int num)
    {
		return num >=1 && num <=31 ? num.ToString() : "###";
    }

	public String selectMonth(int num)
    {
		String month = String.Empty;

		if(num < 1 || num > 12)
        {
			Console.WriteLine("###");
		}
		else
        {
			for (int i = 1; i <= this.months.Length; i++)
			{
				if (i == num)
				{
					month = this.months[i];
				}
			}
		}

		return month;
    }

	public void scanDate(String date, out int day, out int dayVal, out int month)
    {
		String[] splits = date.Split('/', '.', '&', '-');
		day = Convert.ToInt32(splits[0]);
		dayVal = Convert.ToInt32(splits[1]);
		month = Convert.ToInt32(splits[2]);
	}

	public String convertDate(String date, ref int day, ref int dayVal, ref int month)
    {
		String dateConvert = selectDay(day) + " " + dayVal + " " + selectMonth(month);
		return dateConvert;
    }
}
