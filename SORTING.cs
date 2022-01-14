using System;

namespace test
{
    class Program
    {
        static float point1X;
        static float point1Y;
        static float point2X;
        static float point2Y;

        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            while (input[0] != 'q')
            {
                GetInputValuesFromString(input);


                float deltaX = point2X - point1X;
                float deltaY = point2Y - point1Y;

                float distance = (float)Math.Sqrt(Math.Pow(deltaX, 2) + Math.Pow(deltaY, 2));
                float angle = (float)Math.Atan2(deltaY, deltaX);
                angle *= 180 / (float)Math.PI;

                Console.WriteLine(distance + " " + angle);


                input = Console.ReadLine();
            }
        }
        static void GetInputValuesFromString(string input)
        {
            int spaceIndex = input.IndexOf(' ');
            point1X = float.Parse(input.Substring(0, spaceIndex));

            input = input.Substring(spaceIndex + 1);
            spaceIndex = input.IndexOf(' ');
            point1Y = float.Parse(input.Substring(0, spaceIndex));

            input = input.Substring(spaceIndex + 1);
            spaceIndex = input.IndexOf(' ');
            point2X = float.Parse(input.Substring(0, spaceIndex));


            input = input.Substring(spaceIndex + 1);
            point2Y = float.Parse(input);


        }
    }
}
